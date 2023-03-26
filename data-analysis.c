#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <winuser.h>

// варианты решения
// 1) можно создать множество переменных для каждого варианта ответа, но такое решение неоптимизировано
// 2) я уверен, что можно создать программу с одной переменной, но пока не знаю как

int main()
{
    int counter;
    int countStorage[] = {0};
    counter = 0;
    int input;

    // ввожу заход
    // идея отпала, так как на текущий момент невозможен вывод на русском языке -- это можно реализовать с помощью
    // русифицирования

    printf("Welcome to counter of conversion calling\n");
    printf("Menu:\n1: Start of service\n");
    getchar();
    // Инпут вводит число и проверяет на условие, 0 это выход из программы
    if (1)
    {
        while (input = getchar())
        {
            // Задача 1: сделать заполнение массива данными
            // Задача 2: сделать вывод массива с подсчетом в соответствии с результатом звонка
            printf("Choose a result of call\n");
            // printf("------------\n");
            printf("1: successful call\n");
            printf("2: failed call\n");
            printf("3: call a document\n");
            printf("4: call end of agreement\n");
            printf("5: other end of call\n");
            printf("6: call back\n");
            printf("0: for finish\n");

            if (input == '1')
            {
                printf("------------\n");
                printf("Successful call added\n");
                printf("------------\n");
                ++countStorage[counter];
                continue;
            }

            if (input == '2')
            {
                printf("------------\n");
                printf("Failed call added\n");
                printf("------------\n");
                ++countStorage[counter];
                continue;
            }

            if (input == '3')
            {
                printf("------------\n");
                printf("Call a document added\n");
                printf("------------\n");
                ++countStorage[counter];
                continue;
            }

            if (input == '4')
            {
                printf("------------\n");
                printf("Agreement call added\n");
                printf("------------\n");
                ++countStorage[counter];
                continue;
            }

            if (input == '5')
            {
                printf("------------\n");
                printf("Other call added\n");
                printf("------------\n");
                ++countStorage[counter];
                continue;
            }

            if (input == '6')
            {
                printf("------------\n");
                printf("Call back added\n");
                printf("------------\n");
                ++countStorage[counter];
                continue;
            }
            else if (input >= '7')
            {
                printf("------------\n");
                printf("Digit more than need\nTry again\n");
                printf("------------\n");
            }

            else if (input == '0' || input == EOF)
            {
                // вывод данных лучше сделать через цикл. Я делал такое в гистограмме
                printf("------------\n");
                printf("End\n");
                printf("Total calling %d\n", countStorage[counter]);
                break;
            }
        }
        for (int i = 0; i < countStorage[counter]; i++)
        {
            // printf("Array is: %c\n", countStorage[i]);
            printf("Loop on: %d\n Result of: %d\n", i, countStorage[i]);
            // printf("Array is: %c\n", countStorage[i]);
        }
    }
}

/*  Алгоритм взаимодействия с программой следующий
    1. Захожу в меню
    2. Выбираю сервис
    3. Начинаю работу
    4. Записываю результат работы с помощью цифр от 1 до 6
    5. Заканчиваю рабочий день
    6. Нажимаю на кнопку "закончить" и мне выводится результат моих звонок

    Алгоритм работы программы:
    1. Начало программы -- приветствие
    2. Принимаю данные с клавиатуры
    3. Вношу результат работы в массив
    4. Вывожу массив с данными
    */

/*  На текущий момент я сделал вывод суммы звонков,
    теперь я хочу сделать вывод звонков в соответствии с их результатом
    Я хочу выводить данные с массива
    Как мне сделать вывод в соответствии с результатом?
    
    1. Сделать несколько переменных; -- в этом случае можно сделать массив, в котором будут храниться переменные*/