#include <iostream>

using namespace std;

int main() {
    int f, s, t, f1, name;
    cin >> name; // 1890
    f1 = name % 10; // 0
    t = name / 10; // 189
    s = t / 10; // 18
    f = s / 10; // 1
    t %= 10; // 9
    s %= 10; // 8


    cout << f << t << s << f1;

}