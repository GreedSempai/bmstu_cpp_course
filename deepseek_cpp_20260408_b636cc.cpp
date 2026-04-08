// ==================== Map Class ====================
template <typename K, typename V>
class map
{
   public:
	using key_type = K;
	using mapped_type = V;
	using value_type = std::pair<const K, V>;

	// ==================== Iterator ====================
	struct iterator
	{
		tree_node<K, V>* current_;
		std::stack<tree_node<K, V>*> stack_;
		mutable value_type pair_cache_;

		iterator() : current_(nullptr), pair_cache_(K{}, V{}) {}

		explicit iterator(tree_node<K, V>* root, bool is_end = false)
			: current_(nullptr), pair_cache_(K{}, V{})
		{
			if (is_end || root == nullptr)
			{
				current_ = nullptr;
				return;
			}

			tree_node<K, V>* node = root;
			while (node != nullptr)
			{
				stack_.push(node);
				node = node->left;
			}

			if (!stack_.empty())
			{
				current_ = stack_.top();
				stack_.pop();

				tree_node<K, V>* rightNode = current_->right;
				while (rightNode != nullptr)
				{
					stack_.push(rightNode);
					rightNode = rightNode->left;
				}
			}
		}

		value_type& operator*() const
		{
			pair_cache_ = value_type(current_->key, current_->value);
			return pair_cache_;
		}

		value_type* operator->() const
		{
			pair_cache_ = value_type(current_->key, current_->value);
			return &pair_cache_;
		}

		iterator& operator++()
		{
			if (!stack_.empty())
			{
				current_ = stack_.top();
				stack_.pop();

				tree_node<K, V>* rightNode = current_->right;
				while (rightNode != nullptr)
				{
					stack_.push(rightNode);
					rightNode = rightNode->left;
				}
			}
			else
			{
				current_ = nullptr;
			}
			return *this;
		}

		iterator operator++(int)
		{
			iterator temp = *this;
			++(*this);
			return temp;
		}

		bool operator==(const iterator& other) const
		{
			return current_ == other.current_;
		}

		bool operator!=(const iterator& other) const
		{
			return current_ != other.current_;
		}
	};
