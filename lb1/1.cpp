// Балдов Даниил КЭ-104 Вариант 10 Лабораторная 1 задание 1


#include <iostream>
#include <math.h>
#define pi 3.14159265 // в дальнейшем заменяет pi на наше  число 3.14


int main()
{
    setlocale(LC_ALL, "Russian"); //русский язык в консоли
    using namespace std;
    double x, y, z, a, b;
    cout << "введите x  "; //вводим наши значения с клавиатуры
    cin >> x;
    cout << "введите y ";
    cin >> y;
    cout << "введите z ";
    cin >> z;

    if ((0.5 + sin(abs(y + 2)) * sin(abs(y + 2)) * sin(abs(y + 2))) != 0 && (x + pi / 2) >= -1 && (x + pi / 2) <= 1) {  //проверяем нижнюю часть уравнения a, чтобы оно не было равно больше 1.
        a = 2 * sin(y + pi / 3) / (0.5 + sin(abs(y + 2)) * sin(abs(y + 2)) * sin(abs(y + 2))) + asin(x + pi / 2);
        cout << "число a= " << a << endl; //выводим полученное значение
    }
    else {
        cout << "значение не найдено" << endl;  //при условии если нижняя часть уравнения получилась больше 1
    }

    if  (z !=-3*sqrt(3) || z != 3 * sqrt(3)) {
        b = 1 + (0.2 * z * z / 3 - pow(z, 2 / 3));
        cout << "число b= " << b << endl;
    }
    else {
        cout << "значение не найдено";
    }
    return 0;
}


