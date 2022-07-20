// Балдов Даниил КЭ-104 Вариант 10 Лабораторная 1 задание 2

#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    double a, y;
    cout << "введите а ";
    cin >> a;


    if (a < 0)
        y = -a;
    else if (a < 1)
        y = a;
    else if (a < 2)
        y = 1;
    else
        y = -2 * a + 5;
    cout << "y(" << a << ")=" << y << endl; // << a << - вставка значения переменной внутрь текста
    return 0;
}