#include <iostream>
#include <cmath>

int main() {
    int a, b, r,q = 0;

    std::cout << "enter two numbers: " << std::endl;
    std::cin >> a >> b;

    if (b == 0) {
        std::cout << "cannot divide by zero.";
    }
    r = abs(a);
     while (r >= abs(b)) {
        r = r - abs(b);
        q = q + 1;
    }

    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        q = -q;
    }
    if( a<0 ){
        r= -r;
    }
    std::cout << q << " * " << b << " + " << r << " = " << a;
}