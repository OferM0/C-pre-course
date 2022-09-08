#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    //1
    printf("%d\n", aaa(20));

    //2
    drawPlus(10);
    drawPlus(20);
    drawPlus(80);

    //3
    int start, end;
    printf("Pleas enter 2 numbers, the second must be bigger.\n");
    scanf("%d %d", &start, &end);
    rangeValues(start, end);

    //4
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Pleas enter a number.\n");
        scanf("%d", &arr[i]);
        printf("%d\n", evenOrOdd(arr[i]));
    }

    //5 
    printf("%d\n", avg(90, 95, 100));

    //6 
    readNumbers();

    //7 
    printf("%d\n", addSum(3));

    //8
    printf("%d\n", divide(9));
    printf("%d\n", divide(10));
    printf("%d\n", divide(7));

    return 0;
}

//1
int aaa(int num)
{
    return num * num;
}

//2
int drawPlus(int num2)
{
    for (int i = 0; i < num2; i++)
    {
        printf("+");
    }
    printf("\n");
    return 0;
}

//3 
int rangeValues(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        printf("%2d", i);
    }
    printf("\n");

    return 0;
}

//4 
int evenOrOdd(int num3)
{
    int ret;
    ret = (num3 % 2 == 0) ? 10 : 20;
    return("%d", ret);
}

//5
int avg(int n1, int n2, int n3)
{
    return ((n1 + n2 + n3) / 3);
}

//6 
int readNumbers()
{
    int fnum, snum, tnum;
    printf("Pleas enter 3 numbers\n");
    scanf("%d %d %d", &fnum, &snum, &tnum);
    printf("%d\n", avg(fnum, snum, tnum));
    return avg(fnum, snum, tnum);
}

//7
int addSum(int x)
{
    int number, sum = 0;
    for (int i = 0; i < x; i++)
    {
        printf("Pleas enter a number.\n");
        scanf("%d", &number);
        sum = sum + number;
    }
    return sum;
}

//8 
int divide(int num4)
{
    return (num4 / 2);
}
