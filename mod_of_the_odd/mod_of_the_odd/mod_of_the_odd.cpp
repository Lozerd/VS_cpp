#include <iostream>

using namespace std;

int main() {
    int a, b = -1, f, s, t, f1;
    cin >> a; // -1234
    int _module = a * b; // 1234
    f1 = _module % 10; // 0
    t = _module / 10; // 123
    s = t / 10; // 12
    f = s / 10; // 1
    t %= 10; // 3
    s %= 10; // 2
    cout << -f << t << s << f1;
}