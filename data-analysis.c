#include <stdio.h>
#include <stdlib.h>

// варианты решения
// 1) можно создать множество переменных для каждого варианта ответа, но такое решение неоптимизировано
// 2) я уверен, что можно создать программу с одной переменной, но пока не знаю как

int main()
{
    int counter, condition;
    int countStorage[] = {0};
    counter = 0;
    int input;
    int startScript;

    // ввожу заход
    // идея отпала, так как на текущий момент невозможен вывод на русском языке

    printf("Welcome to counter of conversion calling\n");
    printf("Menu:\n1: Start of service\n");
    getchar();
    // Инпут вводит число и проверяет на условие, 0 это выход из программы
    if (1)
    {
        while ((input = getchar()) != EOF)
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
            ++counter;
            if (counter <= '6')
            {
                ++countStorage[counter];
            }
            
            // if (input == '1' && input != ' ' && input != '\n')
            // {
            //     printf("------------\n");
            //     printf("Successful call added\n");
            //     printf("------------\n");
            //     ++counter;
            //     continue;
            // }

            // if (input == '2' && input != ' ' && input != '\n')
            // {
            //     printf("------------\n");
            //     printf("Failed call added\n");
            //     printf("------------\n");
            //     ++counter;
            //     continue;
            // }

            // if (input == '3' && input != ' ' && input != '\n')
            // {
            //     printf("------------\n");
            //     printf("Call a document added\n");
            //     printf("------------\n");
            //     ++counter;
            //     continue;
            // }

            // if (input == '4' && input != ' ' && input != '\n')
            // {
            //     printf("------------\n");
            //     printf("Agreement call added\n");
            //     printf("------------\n");
            //     ++counter;
            //     continue;
            // }

            // if (input == '5' && input != ' ' && input != '\n')
            // {
            //     printf("------------\n");
            //     printf("Other call added\n");
            //     printf("------------\n");
            //     ++counter;
            //     continue;
            // }

            // if (input == '6' && input != ' ' && input != '\n')
            // {
            //     printf("------------\n");
            //     printf("Call back added\n");
            //     printf("------------\n");
            //     ++counter;
            //     continue;
            // }
            // else if (input >= '7')
            // {
            //     printf("------------\n");
            //     printf("Digit more than need\nTry again\n");
            //     printf("------------\n");
            // }

            else if (input == '0')
            {
                // вывод данных лучше сделать через цикл. Я делал такое в гистограмме
                printf("------------\n");
                printf("End\n");
                printf("Total calling %d\n", countStorage[counter]);
                break;
            }
        }
    }
}