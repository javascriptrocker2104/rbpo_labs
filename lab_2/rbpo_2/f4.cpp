module;
#include <cmath>
module student_1bib21031_Lab2_Variant1_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task3 {
				double f4(double);
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task3::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long i = 2;
	do {
		sum += temp, temp = temp1, temp1 = a(i++);
	} while (eps < std::abs(temp - temp1));
	return sum;
};