#include<iostream>
#include<string>
using namespace std;

unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short&);
void ReadPersonSalary(double*);
void ReadPersonData(string&, unsigned short&, double&);  //var1
void ReadPersonData(string&, unsigned short&, unsigned short&, unsigned short&); //var2
void WritePersonData(const string&, const string&, const string&, const unsigned short*);

//global
unsigned short height;
string salary;

unsigned short ReadPersonAge()
{
	unsigned short age;
	cout << "Enter the age: ";
	cin >> age;
	return age;
}

string ReadPersonName()
{
	string name;
	cout << "Enter the name: ";
	cin >> name;
	return name;
}

void ReadPersonHeight()
{
	cout << "Enter the height: ";
	cin >> height;
}

void ReadPersonWeight(unsigned short& weight)
{
	cout << "Enter the weight: ";
	cin >> weight;
}
void ReadPersonSalary(double* salary)
{
	cout << "Enter the salary: ";
	cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& h, unsigned short& weight)//перегрузка
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	h = height;
	ReadPersonWeight(weight);
}

void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age)
{
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Age: " << *age << endl;
	cout << "Salary: " << salary << endl;
}

#ifndef DO_NOT_DEFINE_MAIN
int main(int argc, char* argv[])
{
	string name;
	unsigned short age, weight=0;
	double sal;
	ReadPersonData(name, age, sal);
	cout << endl;
	salary = to_string(sal);
	WritePersonData(name, to_string(height), to_string(weight), &age);
	cout << endl<<endl;
	ReadPersonData(name, age, height, weight);
	cout << endl;
	string h = to_string(height);
	string w = to_string(weight);
	WritePersonData(name, h, w, &age);
	return 0;
}
#endif
