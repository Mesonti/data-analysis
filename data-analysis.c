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

    printf("Welcome to counter of conversion calling\n");
    printf("Choose a result of call\n");
    printf("1: successful call\n");
    printf("2: failed call\n");
    printf("3: call a document\n");
    printf("4: call end of agreement\n");
    printf("5: other end of call\n");
    printf("6: call back\n");

    // Инпут вводит число и проверяет на условие, 0 это выход из программы
    while ((input = getchar()) != EOF)
    {
        
        if (input == '1')
        {
            printf("Successful call added\n");
            ++counter;
            continue;
        }

        if (input == '2')
        {
            printf("Failed call added\n");
            ++counter;
            continue;
        }

        if (input == '3')
        {
            printf("Call a document added\n");
            ++counter;
            continue;
        }

        if (input == '4')
        {
            printf("Agreement call added\n");
            ++counter;
            continue;
        }

        if (input == '5')
        {
            printf("Other call added\n");
            ++counter;
            continue;
        }

        if (input == '6')
        {
            printf("Call back added\n");
            ++counter;
            continue;
            printf("6 пункт %d\n", counter);
        }
        else if (input >= '7')
        {
            printf("Digit more than need\nTry again\n");
        }
        

        else if(input == 0)
        {
            // вывод данных лучше сделать через цикл. Я делал такое в гистограмме
            printf("End");
            break;
        }
        
    }
    printf("End\n");
    printf("Total count %d", counter);
}