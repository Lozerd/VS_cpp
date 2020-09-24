#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int a, b = 0, k = 0;
    bool x = true;
    cin >> a; // 4
    while (x) {
        b = a; // 4
        cin >> a; // 5
        k += 1; // 1
        if (b == a) {
            b = a;
            if (b == a) {
                x = 0;
            }
        }
    }
    cout << k + 1;
}
