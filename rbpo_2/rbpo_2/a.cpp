module student_1bib21031_Lab2_Variant1_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task3 {
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant1::Task3::a(long i) {
	return (i % 2 == 0 ? 1 : -1) * 1 / double((i + 1) * (i + 2) * (i + 3));
};