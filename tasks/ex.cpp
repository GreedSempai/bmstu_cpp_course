#include <iostream>

int func(int num){
    int a = 0;
    int b = 1;
    int q;
    for (int i=0 ; i < num; i++){
        q = a;
        a = b;
        b = q + b;
    }
    return q;
};

int main(int argc,char* argv[]){
    if (argc != 2){
    std::cerr << argv[0] << std::endl;
    }
    int n = func(std::stoi(argv[1]));
    std::cout << n << "\n";
    return 0;
}