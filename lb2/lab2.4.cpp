//Балдов Даниил кэ-104 вариант 10


#include <iostream>


using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int n, i, j, array[10][10];
    cout << "Введите размер матрицы: "; //вводим размер нашей матрицы
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> array[i][j];
    }
    cout << "Вводимая матрица" << endl;  //вводим значения матрицы
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) cout << array[i][j] << "\t";
        cout << "" << endl;
    }
    cout << "Новая матрица" << endl;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++) swap(array[i][j], array[n - j - 1][n - i - 1]);
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++) swap(array[i][j], array[j][i]);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) cout << array[i][j] << "\t";
        cout << "" << endl;
    }
}