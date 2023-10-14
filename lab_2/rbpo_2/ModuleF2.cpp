module student_1bib21031_Lab2_Variant1_Task1:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task4::f2(double x) {
	return x <= 3 ? (x * x - 3 * x + 9) : 1 / double(x * x * x + 6);
};