#include <iostream>

class Test {
public:
    int value;
    
    void printAddress() {
        std::cout << "this = " << this << std::endl;
    }
    
    void setValue(int value) {
        this->value = value;
    }
    
    Test& getThis() {
        return *this;
    }
};

int main() {
    Test obj1, obj2;
    
    std::cout << "&obj1 = " << &obj1 << std::endl;
    
    obj1.setValue(10);
    obj2.setValue(20);
    
    obj1.getThis().value = 30;
    
    std::cout << "obj1.value = " << obj1.value << std::endl;
    std::cout << "obj2.value = " << obj2.value << std::endl;
    
    return 0;
}