#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    //1
    int number = 0;
    printf("Please enter a number + ENTER \n");
    scanf("%d", &number);
    printf("%d \n", number + 100);

    //2
    int num= 0;
    printf("Please enter a number + ENTER \n");
    scanf("%d", &num);
    printf("%d \n", num * num);

    //3
    int num1,num2 = 0;
    printf("Please enter 2 numbers + ENTER \n");
    scanf("%d %d", &num1, &num2);
    printf("%d \n", num1 + num2);

    //4
    int number1, number2,number3,number4 = 0;
    printf("Please enter 4 numbers + ENTER \n");
    scanf("%d %d %d %d", &number1, &number2, &number3, &number4);
    printf("%d %d\n", (number1 + number2 + number3 + number4), ((number1 + number2 + number3 + number4)/4));

    //5
    int numb1, numb2, numb3, numb4 = 0;
    printf("Please enter 4 numbers + ENTER \n");
    scanf("%d %d %d %d", &numb1, &numb2, &numb3, &numb4);
    printf("%d", (numb1 * numb2 + numb3 - numb4));


    return 0;
}
