// Балдов Даниил КЭ-104 Вариант 10 Лабораторная 1 задание 5

#include <stdio.h>
#include <iostream>


int main() {
	using namespace std;
	double a;
	int n = 1;
	double s = 1 / n;
	cout << "a = ";
	cin >> a;
	while (s <= a) { // выполняем пока выполняется ксловие s<=a
		n++;
		s += (double)1 / n;
	}
	cout << n  << endl; //выводим наименьшее число n
	return 0;
}