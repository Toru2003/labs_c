//Балдов Даниил кэ-104 вариант 10

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int s;
    int maxlen = 0; 
    int len = 1;
    cout << "Размер= ";
    cin >> s; //Размер массива 
    int* mas = new int[s];
    for (int i = 0; i < s; i++) {//Ввод кол-ва элементов 
        cout << i+1 << ": ";
        cin >> mas[i];
    }
    for (int i = 0; i < s; i++) {
        if (mas[i] == mas[i + 1]) {
            len++;
            if (len > maxlen) maxlen = len;
        }
        else len = 1;

    }
      
    cout << maxlen << endl;
}
