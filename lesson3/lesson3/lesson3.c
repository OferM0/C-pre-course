#include <stdio.h>
#pragma warning(disable : 4996)

int main1()
{
    //1
    int number = 0;
    printf("Please enter a number + ENTER \n");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("!!!\n");
    }
    else
    {
        printf("@@@\n");
    }
    

    //2
    int num1, num2;
    printf("Please enter 2 numbers + ENTER \n");
    scanf("%d %d", &num1, &num2);
    if(num1+num2>100)
    {
        printf("WIN\n");
    }
    else
    {
        printf("%d\n", num1 + num2);
    }


    //3
    int firstNum, secondNum;
    printf("Please enter 2 numbers + ENTER \n");
    scanf("%d %d", &firstNum, &secondNum);
    if (firstNum > secondNum)
    {
        printf("%d\n", firstNum);
    }
    else
    {
        printf("%d\n", secondNum);
    }
    

    //4
    int number1, number2;
    printf("Please enter 2 numbers + ENTER \n");
    scanf("%d %d", &number1, &number2);
    if (number1 == number2) 
    {
        printf("Great\n");
    }
 

    //5
    int numb1, numb2;
    printf("Please enter 2 numbers + ENTER \n");
    scanf("%d %d", &numb1, &numb2);
    if (numb1 < numb2)
    {
        printf("%d", numb1);
    }
    else
    {
        printf("%d", numb2);
    }


    return 0;
}
