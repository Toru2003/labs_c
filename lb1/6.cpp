// Балдов Даниил КЭ-104 Вариант 10 Лабораторная 1 задание 6

#include <iostream>
#include <cmath>
using namespace std;
 

double F(int n, double x) {
	double x1;
	int i;
	x1 = 1;
	for (i = 1; i <= n; i++) {
		x1 = x1 * (x + cos(i * x)) / pow(2, 1); //решение основной формулы pow-степень
	}
	return x1;
}

int main()
{
	double a, R;
	int n;
	cin >> a >> n; // вводим два числа сначало натуральное, а потом действительное
	R = F(n, a);
	cout << R << endl ; //вывод ответа
	system("pause"); // задержка экрана

}

