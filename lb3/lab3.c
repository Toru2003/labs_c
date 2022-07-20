// Балдов Даниил КЭ-104   В-10

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *fp; // Инициализация указателя типа FILE
    int len=0, size=4, i, count = 0;
    
    int *bebrou = (int*) malloc(size*sizeof(int)); // Создание динамического целочисленного массива
    
    if ((fp = fopen("INPUT.txt", "r+")) == NULL) { // Открытие файла, а также проверка его существования
        perror("INPUT.txt не существует");
        return 0;
    }
    
    while (fscanf(fp, "%i", &bebrou[len]) != EOF) {// Заполнение массива числами из файла
        if (++len == size) { // Увеличение массива, при необходимости
            size *= 2;
            bebrou = (int*) realloc(bebrou, size*sizeof(int));
        }
        
        if (bebrou == NULL) {
            printf("Bad alloc");
            return 0;
        }
    }
    
    for (i=0; i<len; i++) { // При наличии в массиве нужного элемента увеличиваем счетчик нулевых элементов на один
        if (bebrou[i] == 0) {
            count++;
        }
    }
    fprintf(fp, " %d", count);
    
    free(bebrou); // Освобождение памяти
    fclose(fp); // Закрытие файла
}


