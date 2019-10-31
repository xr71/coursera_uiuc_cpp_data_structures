#include <iostream>

int main() {
    
    int *x = new int;
    int &y = *x;
    // this allows us to give a name to the memory address
    
    y = 4;


    std::cout << x << std::endl;

    std::cout << *x << std::endl;
    std::cout << &x << std::endl;
    std::cout << y << std::endl;
    std::cout << &y << std::endl;

    return 0;
}
