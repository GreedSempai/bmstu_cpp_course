#include <iostream>

void func(int num){
    int a;    
    int b;
    int q;
    a = 0;
    b = 1;
    for (int i=0; i < num; i++){
        q = a;
        a = b;
        b = q + b;
    }
    std::cout << q << std::endl;
};

int main(){
    int num1;
    std::cin >> num1;
    func(num1);
    return 0;
}