//Балдов Даниил кэ-104 вариант 10

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int s;
    cout << "Размер= "; 
    cin >> s; //Сколько  чисел
    int* mas = new int[s];      
    int min = 0, sum = 0;            

    for (int i = 0; i < s; i++) {//Вводим числа
        cout << i << ": ";
        cin >> mas[i];
    }

    for (int i = 0; i < s; i++) {
        sum += mas[i]; //Складываем все числа, для будущ. нах. среднего арифм.
        if (mas[min] >= mas[i]) 
            min = i; //Находим номер минимального элемента
    }

    if (s > 0) 
        mas[min] = sum / s; //Заменяем минимальный элемент средним арифметическим

    for (int i = 0; i < s; i++) // Выводим полученный массив на экран
        cout << mas[i] << " ";

    cout << endl;
    system("pause");
}