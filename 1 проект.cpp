#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double a;

	ifstream fin("in2.dat");
	fin >> a;
	fin.close();

	cout << "Вычисление a^4 за две операции" << endl;
	cout << "Входные данные из файла: " << a << endl;

	double a2 = a * a;
	double a4 = a2 * a2;

	cout << "Результат: a^4 = " << a4 << endl;

	return 0;

}
