module;
#include <cmath>

module student_1bib21031_Lab2_Variant1_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long);
				double f4(double);
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task2::f1(double x) {
	double pi = 3.14;
	return 2 * sin(3 * pi - 2 * x) * sin(3 * pi - 2 * x) * cos(5 * pi + 2 * x) * cos(5 * pi + 2 * x);
};

double RBPO::Lab2::Variant1::Task2::f2(double x) {
	if (x <= 3)
		return x * x - 3 * x + 9;
	return  1 / double(x * x * x + 6);
};

double RBPO::Lab2::Variant1::Task2::a(long i) {
	return (i % 2 == 0 ? 1 : -1) * 1 / double((i + 1) * (i + 2) * (i + 3));
};

double RBPO::Lab2::Variant1::Task2::f3(unsigned long n) {
	double sum = a(0); unsigned long i = 0;
	while (i < n)
		sum += a(i++);
	return sum;
};

double RBPO::Lab2::Variant1::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(i++);
	return sum;
};