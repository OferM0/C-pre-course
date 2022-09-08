#include <stdio.h>
#pragma warning(disable : 4996)

int main1()
{
    //loop in loop workout

    //1
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }


    //2
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("!");
        }
        printf("\n");
    }


    //3
    for (int i = 1; i <= 9; i = i + 2)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }


    //4
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }


    //5
    int cnt;
    for (int i = 1; i <= 4; i++)
    {
        cnt = i;
        for (int j = 1; j <= 5; j++)
        {
            printf("%d", cnt);
            cnt++;
        }
        printf("\n");
    }


    //6
    int num = 0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            printf("%d", num);
        }
        num = (num == 0) ? 1 : 0;

        printf("\n");
    }


    //7
    int check = 0;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (check % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("+");
            }
        }
        check++;

        printf("\n");
    }

    // arrays workout

    //1
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        printf("%d", arr[i]);
    }
    printf("\n");


    //2
    int arr2[10];
    int num2;

    for (int i = 0; i < 10; i++)
    {
        printf("Pleas fill the array\n");
        scanf("%d", &num2);
        arr2[i] = num2;
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("%2d", arr2[i]);
    }
    printf("\n");

    //3
    int arr3[10];
    int num3, save;
    for (int i = 0; i < 10; i++)
    {
        printf("Pleas fill the array\n");
        scanf("%d", &num3);
        arr3[i] = num3;
    }
    printf("%d\n", arr3[8]);
    save = arr3[8];
    for (int i = 0; i < 10; i++)
    {
        arr3[i] = arr3[i] + save;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%2d", arr3[i]);
    }

    return 0;
}
