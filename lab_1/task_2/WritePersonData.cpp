#include<iostream>
using namespace std;

string salary;

void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age)
{
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Age: " << *age << endl;
	cout << "Salary: " << salary << endl;
}
