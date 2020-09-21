#include <iostream>

using namespace std;

int main()
{
    int x, y, i, z, t;
    cin >> x >> y >> i >> z >> t;
    bool a = (x % 2 == 0),
        b = (y % 2 == 0),
        c = (i % 2 == 0),
        d = (z % 2 == 0),
        e = (t % 2 == 0);

    cout << a + b + c + d + e;


}