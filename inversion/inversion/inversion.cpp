#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double a, b, c, d, in, tmp;
    cin >> a >> b >> c >> d;
    in = 0;
    if (d < c)
        in += 1;
    if (d < b)
        in += 1;

    if (d < a)
        in += 1;

    if (c < b)
        in += 1;

    if (c < a)
        in += 1;

    if (b < a)
        in += 1;

    cout << in;

}

/*
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int c = 0;
	vector<int> v(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i; j < 4; j++)
		{
			if (v[i] > v[j]) c++;
		}
	}
	cout << c;
}
*/