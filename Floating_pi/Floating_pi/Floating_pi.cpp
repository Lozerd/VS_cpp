#include <iostream>

using namespace std;

int main() {
	int a;
	long double pi = 3.141592653589793;
	cin >> a;
	cout.setf(ios::fixed);
	cout.precision(a);
	cout << pi;
}