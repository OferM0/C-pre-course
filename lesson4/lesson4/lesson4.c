#include <stdio.h>
#pragma warning(disable : 4996)

int main1()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 0;

	d= (a > b) ? 1 : (a > c) ? 2 : 3;

    //1
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }


    //2
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    //3
    int num;
    printf("Pleas enter a number.\n");
    scanf("%d", &num);
    (num > 100 && num < 200) ? (printf("%d\n", num)) : "";


    //4
    int n1, n2;
    printf("Pleas enter 2 numbers.\n");
    scanf("%d %d", &n1, &n2);
    ((n1 + n2 == 100) || (n1 + n2 == 200)) ? (printf("WIN!")) : printf("LOOSE!");


    //5
    int num1, num2;
    printf("Pleas enter 2 numbers.\n");
    scanf("%d %d", &num1, &num2);
    ((num1 % 2 == 0) && (num1 > 100)) ? (printf("%d\n", num1)) : "";


    //6
    int number1, number2;
    printf("Pleas enter 2 numbers.\n");
    scanf("%d %d", &number1, &number2);
    ((number1 % number2 == 0) && (number2 % number1 == 0)) ? (printf("Best!")) : "";

    return 0;

}
    
