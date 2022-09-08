#include <stdio.h>
#pragma warning(disable : 4996)


int main()
{
    //1
    int num;
    printf("Please enter a number\n");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Zugi\n") : printf("Ezugi\n");


    //2
    int firstNum, secondNum, thirdNum;
    printf("Please enter 3 numbers\n");
    scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);
    ((firstNum + secondNum) < thirdNum) ? printf("%d\n", thirdNum) : printf("%d\n", (firstNum + secondNum));


    //3
    int num1, num2;
    printf("Please enter 2 numbers\n");
    scanf("%d %d", &num1, &num2);
    (num1 % num2 == 0) ? printf("Ok\n") : printf("Not ok\n");


    //4
    int number1, number2, number3, iMemutza;
    float fMemutza;
    printf("Please enter 3 numbers\n");
    scanf("%d %d %d", &number1, &number2, &number3);
    fMemutza = ((number1 + number2 + number3) / 3.0);
    iMemutza = fMemutza;
    (iMemutza == fMemutza) ? printf("Int\n") : printf("Float\n");


    //5
    int numb1, numb2, numb3;
    printf("Please enter 3 numbers\n");
    scanf("%d %d %d", &numb1, &numb2, &numb3);
    (numb1 == numb2) ? (numb1 == numb3) ? printf("Equal\n") : printf("Not Equal\n") : printf("Not Equal\n");


    //6
    int firstNumb, secondNumb, thirdNumb, winNum;
    printf("Please enter a number\n");
    scanf("%d", &winNum);
    printf("Please enter 3 numbers\n");
    scanf("%d %d %d", &firstNumb, &secondNumb, &thirdNumb);
    (firstNumb == winNum) ? printf("WIN!\n") : (secondNumb == winNum) ? printf("WIN!\n") : (thirdNumb == winNum) ? printf("WIN!\n") : printf("Loose!\n");


    //7
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    (n1 == n2) ? printf("100\n") : printf("%d\n", (n1 + n2));


    //8
    int nu1, nu2, nu3;
    printf("Please enter 3 numbers\n");
    scanf("%d %d %d", &nu1, &nu2, &nu3);
    if (nu1 > nu2) {
        if (nu1 > nu3) {
            printf("%d", nu1);
        }
        
    }
    else if (nu2 > nu1) {
        if(nu2 > nu3){
            printf("%d", nu2);
        }
    }
    else if (nu3 > nu2) {
        if(nu3 > nu1){
            printf("%d", nu3);
        }
    }
    else {
        printf
    }


    return 0;
}
