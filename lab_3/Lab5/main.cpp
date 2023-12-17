#include <iostream>

import Math;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Complex a(2, -1);
	Complex b(9.1, -4.5);
	Rational c(3, 5);
	Rational d(2, 4);
	double e = -9;
	cout << "a = " << a << " Real = " << a.Re() << " Imag = " << a.Im() << " Mod = " << a.Mod() << " Arg = " << a.Arg() << endl;
	cout << "a+b = " << a << " + " << b << " = " << a + b << endl;
	cout << "a-b = " << a << " + " << b << " = " << a - b << endl;
	cout << "a*b = " << a << " + " << b << " = " << a * b << endl;
	cout << "a/b = " << a << " + " << b << " = " << a / b << endl;
	cout << "a+c = " << a << " + " << d << " = " << a + e << endl;
	cout << "a+b = " << c << " + " << d << " = " << c + d << endl;
	cout << "a-b = " << c << " - " << d << " = " << c - d << endl;
	cout << "a*b = " << c << " * " << d << " = " << c * d << endl;
	cout << "a/b = " << c << " / " << d << " = " << c / d << endl;
	cout << "a = " << c << " ��������� = " << c.Nominator() << " ����������� = " << c.Denominator() << " double = " << double(c) << endl;
	cout << "f(" << a << ") = " << f(a) << endl;
	cout << "f(" << d << ") = " << f(d) << endl;
	cout << "f(" << e << ") = " << f(e) << endl;
	return 0;
}