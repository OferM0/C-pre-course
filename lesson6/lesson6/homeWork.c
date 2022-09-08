#include <stdio.h>
#pragma warning(disable : 4996)

int main() {

    //1
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf("%d", 2);
        }
        printf("\n");
    }


    //2
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf("%d", (i == 1 || i == 9) ? 2 : 3);
        }
        printf("\n");
    }


    //3
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf("%d", (i == 1 || i == 9) ? 2 : ((i > 1 && i < 4) || (i > 6 && i < 9)) ? 3 : 4);
        }
        printf("\n");
    }


    //4
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }


    //5
    int cnt = 1;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf("%d", cnt);
        }
        printf("\n");
        cnt++;
        cnt = (i == 3 || i == 6) ? 1 : cnt;
    }


    //8
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((j != 1 && i == 2) && (j != 10 && i == 2))
            {
                printf(" ");
            }
            else
            {
                printf("+");
            }
        }
        printf("\n");
    }


    //9
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((j != 1 && i > 1) && (j != 10 && i < 6))
            {
                printf(" ");
            }
            else
            {
                printf("+");
            }
        }
        printf("\n");
    }


    //10
    int arr[5];
    int num;
    printf("Pleas enter a number\n");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        arr[i] = num;
        printf("%d", num);
    }
    printf("\n");


    //11
    int arr2[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Pleas enter a number\n");
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr2[i];
    }
    printf("%d\n", sum);


    //12
    int arr3[20];
    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
        {
            printf("Pleas enter a number\n");
            scanf("%d", &arr3[i]);
        }
        else
        {
            arr3[i] = arr3[i - 10];
        }
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d", arr3[i]);
    }
    printf("\n");


    //13
    int arr4[5];
    int check = 0;

    for (int i = 0; i < 5; i++)
    {    
        printf("Pleas enter a number\n");
        scanf("%d", &arr4[i]);
        if (arr4[i] > check)
        {
            check = arr4[i];
        }
    }
    printf("%d", check);
    printf("\n");


    //14
    int arr5[9];
    int mirror = 0;
    int count = 2;
    for (int i = 0; i < 9; i++)
    {
        printf("Pleas enter a number\n");
        scanf("%d", &arr5[i]);
        if (i > 4)
        {
            if (arr5[i] != arr5[i - count])
            {
                mirror = 1;
            }
            count = count + 2;
        }
    }
    if (mirror == 0)
    {
        printf("Mirror");
    }
    else
    {
        printf("Not a mirror");
    }

    printf("\n");


    //15
    int arr6[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("Pleas enter a number\n");
            scanf("%d", &arr6[i]);
        }
        else
        {
            arr6[i] = (arr6[i - 1]*2);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr6[i]);
    }


    return 0;
}
