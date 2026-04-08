#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <utility>
#include <stdexcept>

namespace bmstu
{

template <typename K, typename V>
struct tree_node
{
    tree_node(const K& key, const V& value) : key(key), value(value), left(nullptr), right(nullptr), height(1) {}

    K key;
    V value;
    uint8_t height;
    tree_node* left;
    tree_node* right;
};

template <typename K, typename V>
class map
{
public:
    map() : root_(nullptr), size_(0) {}
    
    ~map() { 
        clear(root_); 
    }
    
    V& operator[](const K& key) {
        tree_node<K, V>* node = find_node(key, root_);
        if (node) {
            return node->value;
        }
        root_ = insert(key, V(), root_);
        return find_node(key, root_)->value;
    }
    
    V& at(const K& key) {
        tree_node<K, V>* node = find_node(key, root_);
        if (!node) {
            throw std::out_of_range("Key not found");
        }
        return node->value;
    }
    
    const V& at(const K& key) const {
        tree_node<K, V>* node = find_node(key, root_);
        if (!node) {
            throw std::out_of_range("Key not found");
        }
        return node->value;
    }
    
    V* find(const K& key) {
        tree_node<K, V>* node = find_node(key, root_);
        return node ? &node->value : nullptr;
    }
    
    bool contains(const K& key) const {
        return find_node(key, root_) != nullptr;
    }
    
    void erase(const K& key) {
        remove(key, root_);
    }
    
    void clear() {
        clear(root_);
        root_ = nullptr;
        size_ = 0;
    }
    
    bool empty() const { 
        return size_ == 0; 
    }
    
    size_t size() const { 
        return size_; 
    }
    
    void print() { 
        print_tree_(root_, 1); 
    }
    
    void inorder_print() {
        inorder_print(root_);
        std::cout << "\n";
    }

    // Iterator class
    class iterator {
    public:
        using iterator_category = std::forward_iterator_tag;
        using value_type = std::pair<K, V>;
        using difference_type = std::ptrdiff_t;
        using pointer = value_type*;
        using reference = value_type&;
        
        iterator() : node(nullptr), parent_map(nullptr) {}
        
        explicit iterator(tree_node<K, V>* n, map* m = nullptr) : node(n), parent_map(m) {}
        
        reference operator*() { 
            current_pair = std::pair<K, V>(node->key, node->value);
            return current_pair;
        }
        
        pointer operator->() { 
            current_pair = std::pair<K, V>(node->key, node->value);
            return &current_pair;
        }
        
        iterator& operator++() {
            if (parent_map) {
                node = parent_map->successor(node);
            }
            return *this;
        }
        
        iterator operator++(int) {
            iterator tmp = *this;
            ++(*this);
            return tmp;
        }
        
        bool operator==(const iterator& other) const { 
            return node == other.node; 
        }
        
        bool operator!=(const iterator& other) const { 
            return node != other.node; 
        }
        
    private:
        tree_node<K, V>* node;
        map* parent_map;
        std::pair<K, V> current_pair;
    };
    
    iterator begin() {
        tree_node<K, V>* min = findMin(root_);
        return iterator(min, this);
    }
    
    iterator end() { 
        return iterator(nullptr, this); 
    }

private:
    tree_node<K, V>* find_node(const K& key, tree_node<K, V>* node) const {
        if (!node) return nullptr;
        if (key == node->key) return node;
        if (key < node->key) return find_node(key, node->left);
        return find_node(key, node->right);
    }
    
    void remove(const K& key, tree_node<K, V>*& node) {
        if (node == nullptr) {
            return;
        }
        else if(key == node->key) {
            --size_;
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                node = nullptr;
            }
            else if (node->left != nullptr && node->right == nullptr) {
                auto ptr = node;
                node = node->left;
                delete ptr;
            }
            else if (node->left == nullptr && node->right != nullptr) {
                auto ptr = node;
                node = node->right;
                delete ptr;
            } else {
                auto minNode = findMin(node->right);
                node->key = minNode->key;
                node->value = minNode->value;
                removeMin(node->right);
            }
        } else if(key < node->key) {
            this->remove(key, node->left);
        }
        else if(key > node->key) {
            this->remove(key, node->right);
        }
        if (node) balance(node);
    }
    
    tree_node<K, V>* findMin(tree_node<K, V>* node) const {
        if (node == nullptr) {
            return nullptr;
        }
        if (node->left == nullptr) {
            return node;
        }
        return findMin(node->left);
    }
    
    tree_node<K, V>* findMax(tree_node<K, V>* node) const {
        if (node == nullptr) {
            return nullptr;
        }
        if (node->right == nullptr) {
            return node;
        }
        return findMax(node->right);
    }
    
    tree_node<K, V>* successor(tree_node<K, V>* node) {
        if (!node) return nullptr;
        
        // If right subtree exists, successor is the leftmost node in right subtree
        if (node->right) {
            return findMin(node->right);
        }
        
        // Otherwise, find the lowest ancestor where node is in left subtree
        tree_node<K, V>* succ = nullptr;
        tree_node<K, V>* current = root_;
        
        while (current) {
            if (node->key < current->key) {
                succ = current;
                current = current->left;
            } else if (node->key > current->key) {
                current = current->right;
            } else {
                break;
            }
        }
        return succ;
    }
    
    tree_node<K, V>* insert(const K& key, const V& value, tree_node<K, V>*& node) {
        if (node == nullptr) {
            node = new tree_node<K, V>(key, value);
            ++size_;
            return node;
        }
        else if (key < node->key) {
            insert(key, value, node->left);
        }
        else if (key > node->key) {
            insert(key, value, node->right);
        }
        else {
            node->value = value;
            return node;
        }
        balance(node);
        return node;
    }
    
    uint8_t heightOfTree(tree_node<K, V>* t) const {
        if (t == nullptr) return 0;
        return t->height;
    }
    
    void updateHeight(tree_node<K, V>* t) {
        if (t) {
            t->height = 1 + std::max(heightOfTree(t->left), heightOfTree(t->right));
        }
    }
    
    void rotateWithLeftChild(tree_node<K, V>*& k2) {
        auto k1 = k2->left;
        k2->left = k1->right;
        updateHeight(k2);
        updateHeight(k1);
        k1->right = k2;
        k2 = k1;
    }
    
    void removeMin(tree_node<K, V>*& node) {
        if (node->left == nullptr) {
            tree_node<K, V>* temp = node;
            node = node->right;
            delete temp;
        } else {
            removeMin(node->left);
            if (node != nullptr) {
                balance(node);
            }
        }
    }
    
    void rotateWithRightChild(tree_node<K, V>*& k1) {
        auto k2 = k1->right;
        k1->right = k2->left;
        updateHeight(k1);
        updateHeight(k2);
        k2->left = k1;
        k1 = k2;
    }
    
    void doubleWithLeftChild(tree_node<K, V>*& k3) {
        rotateWithRightChild(k3->left);
        rotateWithLeftChild(k3);
    }
    
    void doubleWithRightChild(tree_node<K, V>*& k1) {
        rotateWithLeftChild(k1->right);
        rotateWithRightChild(k1);
    }
    
    void balance(tree_node<K, V>*& t) {
        static const int ALLOWED_IMBALANCE = 1;
        if (t == nullptr) return;
        
        if (heightOfTree(t->left) - heightOfTree(t->right) > ALLOWED_IMBALANCE) {
            if (heightOfTree(t->left->left) >= heightOfTree(t->left->right)) {
                rotateWithLeftChild(t);
            } else {
                doubleWithLeftChild(t);
            }
        }
        else if (heightOfTree(t->right) - heightOfTree(t->left) > ALLOWED_IMBALANCE) {
            if (heightOfTree(t->right->right) >= heightOfTree(t->right->left)) {
                rotateWithRightChild(t);
            } else {
                doubleWithRightChild(t);
            }
        }
        updateHeight(t);
    }
    
    void print_tree_(tree_node<K, V>* node, int space) {
        if (node == nullptr) return;
        space += size_;
        print_tree_(node->right, space);
        for (int i = 0; i < space; ++i) std::cout << " ";
        std::cout << node->key << ":" << node->value << "\n";
        print_tree_(node->left, space);
    }
    
    void inorder_print(tree_node<K, V>* node) {
        if (node == nullptr) return;
        inorder_print(node->left);
        std::cout << "[" << node->key << ":" << node->value << "]";
        inorder_print(node->right);
    }
    
    void clear(tree_node<K, V>* node) {
        if (!node) return;
        clear(node->left);
        clear(node->right);
        delete node;
    }
    
    tree_node<K, V>* root_;
    size_t size_;
};

} // namespace bmstu
