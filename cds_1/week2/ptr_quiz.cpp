#include <iostream>

int main() {

    int *p;
    p = new int;
    *p = 0;

    std::cout << p << " " << *p << " " << &p << std::endl;

    return 0;
}