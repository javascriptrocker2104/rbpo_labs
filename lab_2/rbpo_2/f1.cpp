module;
#include <cmath>

module student_1bib21031_Lab2_Variant1_Task1;


namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task3 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task3::f1(double x) {
	double pi = 3.14;
	return 2 * sin(3 * pi - 2 * x) * sin(3 * pi - 2 * x) * cos(5 * pi + 2 * x) * cos(5 * pi + 2 * x);
};