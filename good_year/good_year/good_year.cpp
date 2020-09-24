#include <iostream>

int main()
{
    int a, a1, temp, sum = 0;
    std::cin >> a; // 2020
    a1 = a;
    while (a > 0) {
        temp = a % 10; // 0 // 2 // 0 // 2
        a /= 10; // 202 // 20 // 2
        sum += temp; 
        if (sum != 13) {
            a = 13;
            std::cout << a1 + (a - sum);
        }
        else {
            std::cout << a1 + 9;
        }
    }

    //std::cout << sum;
}