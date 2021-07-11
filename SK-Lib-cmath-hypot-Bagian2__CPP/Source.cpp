
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double x = 17, y = 18, hasil;
	hasil = hypot(x, y);

	cout << "Nilai x = " << x << endl;
	cout << "Nilai y = " << y << endl;
	cout << "Hypotenusa = " << hasil << endl << endl;

	long double a, b, hasil2;
	a = 7.989898;
	b = 9.373737;

	hasil2 = hypot(a, b);

	cout << "Nilai a = " << a << endl;
	cout << "Nilai b = " << b << endl;
	cout << "Hypotenusa = " << hasil2;

	_getch();
	return 0;
}
