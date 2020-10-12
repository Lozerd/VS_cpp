#include <iostream>

using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i <= 666; ++i) {
        while (i % 6 != 0) {
            i = i + 1;

        }
        count++;
    }
        cout << count;
}