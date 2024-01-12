module student_1bib21031_Lab2_Variant1_Task1:F3;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task4 {
				double f3(unsigned long);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task4::f3(unsigned long n) {
	double sum = a(0);
	for (unsigned long i = 0; i < n; sum += a(i++));
	return sum;
};