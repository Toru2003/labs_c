// Балдов Даниил КЭ-104
// ЛР4 В-10


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node *first = NULL; // Создание первого элемента двусвязного списка
struct Node *last = NULL; // Создание второго элемента двусвязного списка
struct Node *previous;

struct Dictionary // Создание объекта типа структура
{
    char *word;
    char *translate;
    char *example;
};

struct Node { // Элемент двусвязного списка
    struct Dictionary dict;
    
    struct Node *next;
};

int compareNumber(void const *a, void const *b)
{
    struct Node *dict_a = (struct Node *)a;
    struct Node *dict_b = (struct Node *)b;
    
    return strcmp(dict_a->dict.translate, dict_b->dict.translate) >= 0 ? 1 : 0;
}

void addNewDict(void const *n, void const *c) { // Рекурсивная функция добавления нового элемента в список
    
    struct Node *new = (struct Node *)n;
    struct Node *current = (struct Node *)c;
    
    if (compareNumber(new, current)) { // Проверка нахождения новго элемента относительно текущего
        if (current->next == NULL) { // если следующий элемент у текущего отсутствует, тогда новый элемент становится последним
            new->next = current->next;
            current->next = new;
            last = new;
        } else { // Иначе проходим дальше
            previous = current;
            current = current->next;
            addNewDict(new, current);
        }
    } else { // Вставка нового элемента перед текущим
        new->next = current;
        if (previous == NULL) {
            first = new;
        } else {
            previous->next = new;
        }
    }
}

int main()
{
    int k = 1;
    int flag = 1;
    
    int count = 0; // Количество заполненных структур
    int len = 8; // Количество элементов в массиве
            
    char buf[100]; // Буферная перменная для работы со строками
    
    for (int i = 0; i < len; i++, count++) { // Ввод значений в перменные структур
        printf("%i)\n", i+1);
        
        char *curWord;
        char *curTranslate;
        char *curExample;
        
        printf(" word -> ");
        scanf("%s", buf);
        
        curWord = calloc(strlen(buf)+1, sizeof(char));
        strcpy(curWord, buf);

        printf(" translate -> ");
        scanf("%s", buf);
        
        curTranslate = calloc(strlen(buf)+1, sizeof(char));
        strcpy(curTranslate, buf);
        
                
        printf("Введите пример использования в предложении:\n");
        printf(" -> ");
        scanf("%s", buf);
        
        curExample = calloc(strlen(buf)+1, sizeof(char));
        strcpy(curExample, buf);
        
        printf("Желаете ли вы продолжить ввод?\nВведите 0, для того чтобы остановить работу, иначе введите любую другую цифру\n-> ");
        scanf("%d", &flag);
                
        if (first == NULL) { // Если первый элемент не опредлен, задаем ему значения
            first = malloc(sizeof(struct Node));
            last = first;
            
            first->next = NULL;
            
            first->dict.word = curWord;
            first->dict.translate = curTranslate;
            first->dict.example = curExample;
            // Проверка желания прекратить ввод
            if (flag == 0) {
                break;
            }
            continue;
        }
        
        struct Node *new = malloc(sizeof(struct Node)); // Новый элемент типа struct Dictionary
        new->dict.word = curWord;
        new->dict.translate = curTranslate;
        new->dict.example = curExample;
        
        previous = NULL;
        struct Node *current = malloc(sizeof(struct Node)); // Текущий элемент, начинаем с первого
        current = first;
        
        addNewDict(new, current); // Запуск рекурсивной функции
        if (flag == 0) { // Проверка желания прекратить ввод
            break;
        }
    }
    
    struct Node *tmp = first; // вывод значений списка на консоль
    while (tmp != NULL) {
        printf("%i)\n", k);
        printf(" word -> %s\n", tmp->dict.word);
        printf(" translate -> %s\n", tmp->dict.translate);
        printf(" пример использования в предложении -> %s\n", tmp->dict.example);
        tmp = tmp->next;
        k++;
    }
}
