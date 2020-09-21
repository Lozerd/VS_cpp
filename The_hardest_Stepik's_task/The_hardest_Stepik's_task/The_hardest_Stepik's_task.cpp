#include <iostream>


int main() {

    long a, b, c, d;
    std::cin >> a >> b >> c >> d; // 1 2 3 4

    std::cout << (a == a) + (a != b) + (c != a && c != b) + (d != a && d != b && d != c);
    //std::cout<< (a!=b && a!=c && a!=d) + (b!=c && b!=d) + (c!=d) + 1; // Вариант моего код, поменьше
    //std::cout << 4 - (a == b || a == c || a == d) - (b == c || b == d) - (c == d)  << endl;
}