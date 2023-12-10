#include<iostream>
#include<string>
using namespace std;
extern unsigned short height;

void ReadPersonData(string&, unsigned short&, double&);
void ReadPersonData(string&, unsigned short&, unsigned short&, unsigned short&);
void WritePersonData(const string&,const string&,const string&, const unsigned short*);

extern string salary;

#ifndef DO_NOT_DEFINE_MAIN
int main(int argc, char* argv[])
{
	string name;
	unsigned short age, weight = 0;
	double sal;
	ReadPersonData(name, age, sal);
	cout << endl;
	salary = to_string(sal);
	WritePersonData(name, to_string(height), to_string(weight), &age);
	cout << endl << endl;
	ReadPersonData(name, age, height, weight);
	cout << endl;
	string h = to_string(height);
	string w = to_string(weight);
	WritePersonData(name, h, w, &age);
	return 0;
}
#endif
