#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	double a, b, c, x, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// Спосіб 1
	if (a < 0 && x != 0)
		F = a * pow(x, 2) + pow(b, 2) * x;
	if (a > 0 && x == 0)
		F = x - a / (x - c);
	if (!(a < 0 && x != 0) && !(a > 0 && x == 0))
		F = 1.0 + x / c;

	cout << endl;
	cout << "1) F = " << F << endl;

	// Спосіб 2
	if (a < 0 && x != 0)
		F = a * pow(x, 2) + pow(b, 2) * x;
	else
		if (a > 0 && x == 0)
			F = x - a / (x - c); 
		else
			F = 1.0 + x / c; 

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}