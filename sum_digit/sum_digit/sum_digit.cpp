#include <iostream>

int main()
{
    int a, temp, sum = 0;
    std::cin >> a;
    a = abs(a);
    while (a > 0) {
        temp = a % 10;
        a /= 10;
        sum += temp;
    }
    std::cout << sum;
}