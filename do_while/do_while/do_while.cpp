#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    long long a, k = 0;
    cin >> a;
    while (a <= pow(10, 7)) {
        a = a * 2;
        k = k + 1;
    }
    cout << a << " " << k;
}
