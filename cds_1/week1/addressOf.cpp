#include <iostream>

void foo() {
    int val = 42;

    std::cout << val << std::endl;
    std::cout << &val << std::endl;
}

int main() {
    int num = 7;

    std::cout << num << std::endl;
    std::cout << &num << std::endl;

    foo();

    return 0;
}

