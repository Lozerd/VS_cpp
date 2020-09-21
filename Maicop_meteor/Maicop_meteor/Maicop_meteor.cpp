#include <iostream>


int main() {

    short int a, b, c, d, a2, b2, c2;
    std::cin >> a >> b >> c >> d;
    std::cin >> a2 >> b2 >> c2;

    if (a != a2 && a != b2 && a != c2) {
        std::cout << a;
    }
    if (b != a2 && b != b2 && b != c2) {
        std::cout << b;
    }
    if (c != a2 && c != b2 && c != c2) {
        std::cout << c;
    }
    if (d != a2 && d != b2 && d != c2) {
        std::cout << d;
    }
}