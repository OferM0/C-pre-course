#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    //1
    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");


    //2
    for (int i = 100; i >= 10; i--)
    {
        printf("%d ", i);
    }
    printf("\n");


    //3
    for (int i = 100; i <= 1000; i = i + 4)
    {
        printf("%d ", i);
    }
    printf("\n");


    //4
    for (int i = 1; i <= 20; i++)
    {
        printf("%d + %d =%d\n", i, (i + 1), (i + (i + 1)));
    }


    //5
    for (int i = 1; i <= 20; i++)
    {
        printf("%d + %d =%d\n", i, (i * 3), (i + (i * 3)));
    }


    //6
    for (int i = 1000; i >= 10; i = i - 9)
    {
        printf("%d ", i);
    }
    printf("\n");


    //7
    for (int i = 1; i <= 101; i++)
    {
        printf("%d * %d =%d\n", i, (i + 3), (i * (i + 3)));
    }


    //8
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    for (int i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }


    //9
    int num;
    printf("Pleas enter a number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("* ");
    }
    printf("\n");

    //10
    int num1, num2;
    printf("Pleas enter 2 numbers\n");
    scanf("%d %d", &num1, &num2);
    for (int i = num1; i <= num2; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    //11
    int number1, number2;
    printf("Pleas enter 2 numbers\n");
    scanf("%d %d", &number1, &number2);

    if (number2 > number1)
    {
        for (int i = number1; i <= number2; i++)
        {
            printf("%d ", i);

        }
    }
    else
    {
        for (int i = number1; i >= number2; i--)
        {
            printf("%d ", i);

        }
    }
    printf("\n");


    //12
    int num3;
    printf("Pleas enter a number\n");
    scanf("%d", &num3);
    for (int i = 1; i <= (num3 / 2); i++)
    {
        printf("Shalom ");
    }
    printf("\n");


    //13
    int num4;
    printf("Pleas enter a number\n");
    scanf("%d", &num4);
    for (int i = 1; i <= (num4 / 4); i++)
    {
        printf("Hi ");
    }
    printf("\n");


    //14
    int num5;
    printf("Pleas enter a number\n");
    scanf("%d", &num5);
    for (int i = 1; i <= (num5 * 2); i++)
    {
        printf("%d ", num5);
    }
    printf("\n");


    //15
    int num6;
    printf("Pleas enter a number\n");
    scanf("%d", &num6);
    for (int i = num6; i >= 0; i--)
    {
        printf("%d ", i);
    }

    return 0;
}
