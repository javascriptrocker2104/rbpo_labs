module student_1bib21031_Lab2_Variant1_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task3 {
				double f3(unsigned long);
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task3::f3(unsigned long n) {
	double sum = a(0); unsigned long i = 0;
	do {
		sum += a(i);
		i++;
	} while (i< n);
	return sum;
};