#include <string>
using namespace std;

extern unsigned short height;

string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);

void ReadPersonData(string& name, unsigned short& age, unsigned short& h, unsigned short& weight)//перегрузка
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	h = height;
	ReadPersonWeight(weight);
}
