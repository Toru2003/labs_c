// Балдов Даниил КЭ-104 Вариант 10 Лабораторная 1 задание 3

#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int Number;
    cout << "Введите число  ";
    cin >> Number;

    int M[10] = {}; //создаем массив который будем добавлять числа нашего числа
    for (int i = 0; i < 4; i++)
    {
        M[Number % 10]++;
        Number = Number / 10;
    }
 
    for (int i = 0; i < 10; i++)
        if (M[i] == 3) //если находим три одинаковых числа выводим да иначе выводим нет
        {
           
            cout << "Да";
            return 0;
        }
    cout << "Нет";
    return 0;
}






