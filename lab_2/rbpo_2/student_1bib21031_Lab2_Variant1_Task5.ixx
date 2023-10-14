module;
#include <cmath>
export module student_1bib21031_Lab2_Variant1_Task1;
export import :A;
export import :F1;
export import :F2;
export import :F3;
export import :F4;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task5 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long);
				export double f4(double);
				double a(long);
			};
		};
	};
};

module :private;

namespace RBPO {
	namespace Lab2 {
		namespace Variant1 {
			namespace Task5 {
				double f1(double x) {
					double pi = 3.14;
					return 2 * sin(3 * pi - 2 * x) * sin(3 * pi - 2 * x) * cos(5 * pi + 2 * x) * cos(5 * pi + 2 * x);
				};

				double f2(double x) {
					return x <= 3 ? (x * x - 3 * x + 9) : 1 / double(x * x * x + 6);
				};

				double f3(unsigned long n) {
					double sum = a(0);
					for (unsigned long i = 0; i < n; sum += a(i++));
					return sum;
				};

				double f4(double eps) {
					double sum = a(0); unsigned long i = 2;
					for (double temp = a(1), temp1 = a(2); eps < std::abs(temp - temp1); sum += temp, temp = temp1, temp1 = a(i++));
					return sum;
				}

				double a(long i) {
					return (i % 2 == 0 ? 1 : -1) * 1 / double((i + 1) * (i + 2) * (i + 3));
				};
			};
		};
	};
};