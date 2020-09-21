#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(6);


	int a, b, c;
	std::cin >> a >> b >> c;
	double D = pow(b, 2) - 4 * a * c;
	if (D > 0) {
		double d = sqrt(D);
		double x1 = (-b + d) / 2 / a;
		cout << x1;
	}
	if (D == 0) {
		double d = sqrt(D);
		double x1 = (-b) / 2 / a;
		cout << x1;
	}

}
/*

#include <iostream>
#include <cmath>
int main() {
    short a, b, c;
    if (std::cin >> a >> b >> c) std::cout << (std::sqrt(b * b - 4.0 * a * c) - b) / (a << 1);
    return 0;
}
*/