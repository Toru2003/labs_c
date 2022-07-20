// Балдов Даниил КЭ-104 Вариант 10 Лабораторная 1 задание 4

#include <iostream>
#include <string>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n , i   ;
    char k;
    char* arr;
    cout << "Ввод кол-ва элементов массива  ";
    cin >> n;
    arr = new char[n];
    cout << "Ввод элементов массива " << endl;
    for (i = 0; i <= n; i++)
    {  
        cin >> k;
        arr[i] = k;
    } 
    
    bool s1, s2, s3, s4, s5 ;
    for (int s = 0; s < n; s++) {
        if (arr[s] == 'a') {
            s1 = true;
            break;
        }

        else s1 = false; 
    }
    for (int s = 0; s < n; s++) {
        if (arr[s] == 'b') {
            s2 = true;
            break;
        }

        else s2 = false;

    }
    for (int s = 0; s < n; s++) {
        if (arr[s] == 'c') {
            s3 = true;
            break;
        }

        else s3 = false;

    }
    for (int s = 0; s < n; s++) {
        if (arr[s] == 'd') {
            s4 = true;
            break;
        }  

        else s4 = false;

    }
    for (int s = 0; s < n; s++) {
        if (arr[s] == '!') {
            s5 = true;
            break;
        }   

        else s5 = false;

    }
    if (s1 == s2 == s3 == s4 == s5 == true) {
        cout << "Да" << endl;
    }

    else cout << "Нет" << endl;
   }

   


   
    
  

   
               

  

