#include <iostream>
#include <string>

int sum(int a, int b)
{
    return a+b;
}

int dev1(int a, int b)
{
    return a/b;
}

int func(int(*operation)(int,int))
{
    int result = operation(10, 5);
    std::cout << "Result:" << result <<std::endl;
}

int main()
{
    func(sum);
    func(dev1);
}
