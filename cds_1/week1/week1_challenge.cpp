#include <iostream>

class Pair {
    public: 
            double a;
            double b;
            double sum() {
                return a+b;
            }
};

int main() {
      Pair p;
        p.a = 100;
          p.b = 200;
          if (p.a + p.b == p.sum()) {
                  std::cout << "Success!" << std::endl;
                    
          } else {
                  std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
                    
          }
            return 0;
            
}
