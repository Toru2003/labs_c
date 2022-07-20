//Балдов Даниил кэ-104 вариант 10


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int countMax = 0, t = 0, size, maxEl = -1000, minEl = 100000, imax;
    cout << "Введите размер массива: "; //вводим размер матрицы
    cin >> size;
    int *array = new int[size]; 
    int *tmp = new int[size - countMax + 1];
    for (int i = 0; i < size; i++) {
        cout << "Введите элемент: "; //вводим элементы
        cin >> array[i];
    }
    for (int i = 0; i < size; i++) {          
        if (array[i] > maxEl) maxEl = array[i];
        if (array[i] < minEl) minEl = array[i];
    }
    for (int i = 0; i < size; i++) {
        if (array[i] == maxEl) {
            countMax++;
            imax = i;
        }
    }
    for (int i = imax; i < imax + 1; i++) array[i] = minEl;
    for (int i = 0; i < size; i++) {
        if (array[i] != maxEl) {
            tmp[t] = array[i];
            t++;
        }
    }
    for (int i = 0; i < (size - countMax + 1); i++) cout << tmp[i] << " ";
}