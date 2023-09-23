#include<iostream>
#include<string>
using namespace std;

void ReadPersonData(string&, unsigned short&, double&);
void ReadPersonData(string&, unsigned short&, unsigned short&, unsigned short&);
void WritePersonData(const string&,const string&,const string&, const unsigned short*);

extern string salary;

void main(int argc, char* argv[])
{
	string name;
	unsigned short age, height, weight;
	double sal;
	ReadPersonData(name, age, sal);
	cout << endl;
	ReadPersonData(name, age, height, weight);
	cout << endl;
	string h = to_string(height);
	string w = to_string(weight);
	salary = to_string(sal);
	WritePersonData(name, h, w, &age);
}
