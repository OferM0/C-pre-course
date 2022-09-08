#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
    
    /*
    //1
    char str[11]="ABRACADABRA";
    for(int i=0; i<11; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    //2
    char str2[100];
    printf("Pleas enter as you wish\n");
    gets(str2);
    printf("%c\n", str2[2]);

    //3
    char str3[100];
    int i = 0;
    int check = 0;
    printf("Pleas enter as you wish\n");
    gets(str3);
    while(str3[i]!=0)
    {
        check= (str3[i]=='A')? 1: check;
        i++;
    }
    (check==1)? printf("There is A in %s\n", str3): printf("There is no A in %s\n", str3);

    //4
    char str4[100];
    int j=0, cnt=0;
    printf("Pleas enter as you wish\n");
    gets(str4);
    while(str4[j]!=0)
    {
        cnt= (str4[j]=='C')? cnt+1: cnt;
        j++;
    }
    printf("There is %d C in %s\n",cnt, str4);

    //5
    char str5[100];
    int k=0, check2=0;
    printf("Pleas enter as you wish\n");
    gets(str5);
    while(str5[k]!=0)
    {
        check2= (str5[k]>47 && str5[k]<58 )? 1: check2;
        k++;
    }
    (check2==1)? printf("There are digits in %s\n", str5): printf("There are no digits in %s\n", str5);

    //6
    int len=0;
    char str6[100];
    printf("Pleas enter as you wish\n");
    gets(str6);
    printf("The length is %d\n", strlen(str6));

    //7
    int len2=0;
    char str7[100];
    printf("Pleas enter as you wish\n");
    gets(str7);
    (strlen(str7)>10)? printf("The length is more than 10\n"): printf("The length is less than 10\n");

    //8
    int length1, length2=0;
    char str8[100];
    char str9[100];
    printf("Pleas enter as you wish\n");
    gets(str8);
    printf("Pleas enter as you wish\n");
    gets(str9);
    (strlen(str8) > strlen(str9))? printf("Str1 is longer\n"): (strlen(str8) < strlen(str9))? printf("Str1 is shorter\n"): printf("Equal\n");

    //9
    char str10[100];
    char str11[100];
    printf("Pleas enter as you wish\n");
    gets(str10);
    printf("Pleas enter as you wish\n");
    gets(str11);
    strcat(str10, str11);
    printf("%s\n", str10);

    //10
    char str12[100];
    char strcopy[100];
    printf("Pleas enter as you wish\n");
    gets(str12);
    strcpy(strcopy, str12);
    for(int i=1; i<=5; i++)
    {
        strcat(str12, strcopy);
    }
    printf("%s\n", str12);

    //11
    char str13[100];
    int x;
    printf("Pleas enter as you wish\n");
    gets(str13);
    printf("Pleas enter a number\n");
    scanf("%d", &x);
    strcpy(strcopy, str13);
    for(int i=1; i<=x; i++)
    {
        strcat(str13, strcopy);
    }
    printf("%s\n", str13);

    //12
    char str14[100];
    char stradd[100];
    printf("Pleas enter a sentance\n");
    gets(str14);
    strcat(str14, ",");
    for(int i=1; i<=10; i++)
    {
        printf("Pleas enter a sentance\n");
        gets(stradd);
        strcat(str14, " ");
        strcat(str14, stradd);
        strcat(str14, ",");
    }
    strcat(str14, ".");
    printf("%s\n", str14);

    //13
    char lucky[100], st1[100];
    int equal=0;
    printf("Pleas enter as you wish\n");
    gets(lucky);
    for(int i=1; i<=10; i++)
    {
        printf("Pleas enter as you wish\n");
        gets(st1);
        equal= (strcmp(lucky, st1)==0)? 1: equal;
    }
    (equal==1)? printf("There are equal strings\n"): printf("There are no equal strings\n");
    
    */
    //14
    char first[100], second[100];
    int checkif=0, savedf = 0 ,saveds=0;
    printf("Pleas enter as you wish\n");
    gets(first);
    printf("Pleas enter as you wish\n");
    gets(second);
    for (int s = 0; s < strlen(second); s++)
    {
        for (int f = 0; f < strlen(first); f++)
        {
            while (savedf > 0 && first[savedf] != 0 && second[saveds] != 0)
            {
                if (first[savedf] == second[saveds])
                {
                    checkif++;
                    savedf++;
                    saveds++;
                }
                else 
                {
                    saveds=0;
                    savedf = 0;
                    checkif = 0;
                }
            }
            if (checkif == strlen(second))
            {
                checkif = strlen(second);
            }
            else
            {
                if (first[f] == second[s])
                {
                    checkif++;
                    savedf = f+1;
                    saveds = s+1;

                }
                else
                {
                    checkif = 0;
                }
            }
        }
    }
    if (checkif == strlen(second) && checkif<strlen(first))
    {
        printf("second string is in first string\n");
    }
    else
    {
        printf("second string is not in first string\n");
    }

    /*
    
    //15
    char str16[100];
    int t = 0;
    int jstart = -1;
    printf("Pleas enter as you wish\n");
    gets(str16);
    while (str16[t] != 0 && jstart == -1)
    {
        jstart = (str16[t] == 'A') ? t : jstart;
        t++;
    }
    if (jstart == -1)
    {
        printf("There is no A in %s\n", str16);
    }
    else
    {
        for (int i = jstart; i < strlen(str16); i++)
        {
            printf("%c\n", str16[i]);
        }
    }
    
    */
    return 0;
}