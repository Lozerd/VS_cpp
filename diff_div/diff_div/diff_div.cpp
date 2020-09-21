#include <iostream>

using namespace std;

int main() {
	float a;
	long double b;
	cin >> b;
	a = b;
	cout.setf(ios::fixed);
	cout.precision(0);
	cout << a - b;
}