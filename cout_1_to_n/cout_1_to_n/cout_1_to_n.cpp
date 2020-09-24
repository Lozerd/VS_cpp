#include <iostream>

int main() {
    long long n, a;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        std::cout << a << " ";// << std::endl; На степике без этого работает
    }
}