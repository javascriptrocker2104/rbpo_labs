#include <iostream>
using namespace std;

import student_1bib21031_Lab2_Variant1_Task1;


int main() {
	char e;
	do
	{
		cout <<"For first task input :'1'"
		     <<"\nFor second task input :'2'"
			 <<"\nFor third task input:'3'"
			 <<"\nFor strat fourth task input:'4'"
			 <<"\nFor start fifth task input :'5'"
			 <<"\nFor end the session input:'e'" <<endl;
		cin >> e;
		cout <<endl;
		switch (e) {
			unsigned long n; double x, eps;
		case '1':
			cout << "Input x, n and eps:" << endl;
			cin >> x >> n >> eps;
			cout <<endl<< "f1(x) = " << RBPO::Lab2::Variant1::Task1::f1(x) <<endl
				<< "f2(x) = " << RBPO::Lab2::Variant1::Task1::f2(x) <<endl
				<< "f3(n) = " << RBPO::Lab2::Variant1::Task1::f3(n) <<endl
				<< "f4(eps) = " << RBPO::Lab2::Variant1::Task1::f4(eps) <<endl << endl;
			break;
		case '2':
			cout << "Input x, n and eps:" << endl;
			cin >> x >> n >> eps;
			cout << endl << "f1(x) = " << RBPO::Lab2::Variant1::Task2::f1(x) << endl
				 << "f2(x) = " << RBPO::Lab2::Variant1::Task2::f2(x) << endl
				 << "f3(n) = " << RBPO::Lab2::Variant1::Task2::f3(n) << endl
				 << "f4(eps) = " << RBPO::Lab2::Variant1::Task2::f4(eps) <<endl << endl;
			break;
		case '3':
			cout <<"Input x, n and eps:" << endl;
			cin >> x >> n >> eps;
			cout << endl << "f1(x) = " << RBPO::Lab2::Variant1::Task3::f1(x) << endl
			     << "f2(x) = " << RBPO::Lab2::Variant1::Task3::f2(x) << endl
				 << "f3(n) = " << RBPO::Lab2::Variant1::Task3::f3(n) << endl
				 << "f4(eps) = " << RBPO::Lab2::Variant1::Task3::f4(eps) <<endl << endl;
			break;
		case '4':
			cout <<"Input x, n and eps:" << endl;
			cin >> x >> n >> eps;
			cout << endl << "f1(x) = " << RBPO::Lab2::Variant1::Task4::f1(x) << endl
			     << "f2(x) = " << RBPO::Lab2::Variant1::Task4::f2(x) << endl
				 << "f3(n) = " << RBPO::Lab2::Variant1::Task4::f3(n) << endl
				 << "f4(eps) = " << RBPO::Lab2::Variant1::Task4::f4(eps) << endl << endl;
			break;
		case '5':
			cout << "Input x, n and eps:" << endl;
			cin >> x >> n >> eps;
			cout << endl << "f1(x) = " << RBPO::Lab2::Variant1::Task5::f1(x) << endl
				 << "f2(x) = " << RBPO::Lab2::Variant1::Task5::f2(x) << endl
				 << "f3(n) = " << RBPO::Lab2::Variant1::Task5::f3(n) << endl
				 << "f4(eps) = " << RBPO::Lab2::Variant1::Task5::f4(eps) <<endl<<endl;
			break;
		case 'e':
			break;
		default:
			cout << "Inputed data is incorrect!" << endl;
			break;
		}
	} while (e != 'e');
	return 0;
};
