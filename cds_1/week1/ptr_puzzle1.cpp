#include <iostream>

int main() {
    int i = 2, j = 4, k = 6;
    
    std::cout << i << j << k << std::endl;

    int *p = &i, *q = &j, *r = &k;

    std::cout << p << " " << q << " " << r << " " << std::endl; 

    i = k;

    std::cout << i << j << k << std::endl;
    std::cout << p << " " << q << " " << r << " " << std::endl; 

    *q = *r;

    std::cout << i << j << k << std::endl;
    std::cout << p << " " << q << " " << r << " " << std::endl; 

    return 0;
}
