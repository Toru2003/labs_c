// Балдов Даниил КЭ-104
// ЛР4 В-10


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dictionary // Создание объекта типа структура
{
    char *word;
    char *translate;
    char *example;
};

int compare(void const *a, void const *b) // сравнение двух строк
{
    struct Dictionary *dict_a = (struct Dictionary *)a;
    struct Dictionary *dict_b = (struct Dictionary *)b;

    return strcmp(dict_a->translate, dict_b->translate); // Вывод результата сравнения
}

void show(struct Dictionary *dict, int count) {
    for (int i = 0; i < count; i++) { // вывод значений массива на консоль
        printf("%i)\n", i+1);
        printf(" word -> %s\n", dict[i].word);
        printf(" translate -> %s\n", dict[i].translate);
        printf(" пример использования в предложении -> %s\n", dict[i].example);
    }
}

void check(struct Dictionary *dict, int count, char *required) {
    for (int i = 0; i < count; i++) {
        if (strcmp(dict[i].translate, required) == 0) {
            printf(" word -> %s\n", dict[i].word);
            printf(" translate -> %s\n", dict[i].translate);
            printf(" пример использования в предложении -> %s\n", dict[i].example);
            return;
        }
    }
    printf("Такого слова нет в словаре, попробуйте другое\n");
    return;
}

int main()
{
    int flag = 1;
        
    int count = 0; // Количество заполненных структур
    int len = 6; // Количество элементов в массиве
        
    struct Dictionary *dict = calloc(len, sizeof(struct Dictionary)); // Инициализация массива длинной len
    
    char buf[100]; // Буферная перменная для работы со строками
    
    for (int i = 0; i < len && flag != 0; i++, count++) { // Ввод значений в перменные структур
        printf("%i)\n", i + 1);
        
        printf(" word -> ");
        scanf("%s", buf);
        
        dict[i].word = calloc(strlen(buf)+1, sizeof(char));
        
        strcpy(dict[i].word, buf); // Копирование слова в соответсвующую переменную структуры
        
        printf(" translate -> ");
        scanf("%s", buf);
                
        dict[i].translate = calloc(strlen(buf)+1, sizeof(char));
        
        strcpy(dict[i].translate, buf); // Копирование перевода в соответсвующую переменную структуры

        printf("Введите пример использования в предложении:\n"); // Пример использования в предложении
        printf(" -> ");
        scanf("%s", buf);
        
        dict[i].example = calloc(strlen(buf)+1, sizeof(char));
        
        strcpy(dict[i].example, buf);
        
        printf("Желаете ли вы продолжить ввод?\nВведите 0, для того чтобы остановить работу, иначе введите любую другую цифру\n-> ");
        scanf("%d", &flag); // Проверка желания прекратить ввод
    }
    
    flag = 1;
    
    if (count != 1) qsort(dict, count, sizeof(struct Dictionary), compare); // Сортировка по заданному компаратору
    
    while (flag != 0) {
        printf("Введите перевод слова, информацию о котором вы хотите увидеть\n-> ");
        scanf("%s", buf);
        check(dict, count, buf);
        printf("Введите 0, чтобы вывести весь словарь и прекратить работу программы, чтобы продолжить введите любой другую цифру\n-> ");
        scanf("%d", &flag);
    }
    
    show(dict, count);
    
    free(dict); // Освобождение динамической памяти
}
