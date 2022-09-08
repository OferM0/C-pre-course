/*
#include <stdio.h>
#include <string.h>

int main2() {
    
    //1
    char str[1000]; //str-> adress of string
    char *ptr=str+1; //str[0]-> first char of string

    printf("Please enter a string of at least 10 chars\n");
    gets(str);
    printf("%s\n", ptr);

    //2 first and recomended way
    char st[1000];
    char starget[4];

    char *pt;
    char *ptarget;

    pt=st;
    ptarget=starget;

    printf("Please enter a string of at least 10 chars\n");
    gets(st);

    //step1
    *ptarget=*pt;

    //step2
    pt=pt+4;
    ptarget=ptarget+1;
    *ptarget=*pt;

    //step3
    pt=pt+3;
    ptarget=ptarget+1;
    *ptarget=*pt;

    //close string
    ptarget=ptarget+1;
    *ptarget=0;

    printf("%s\n", starget);



    //2 second way
    char str2[1000];
    char build[4];

    char *ptr2=str2;

    printf("Please enter a string of at least 10 chars\n");
    gets(str2);

    build[0]= ptr2[0];
    build[1]= ptr2[4];
    build[2]=ptr2[7];
    build[3]=0;

    printf("%s\n", build);

    //3
    char str3[1000];
    printf("Please enter a string of at least 10 chars\n");
    gets(str3);
    char *ptr3=str3;
    (ptr3[strlen(str3)-1]=='.')? printf("Ok\n"): printf("Not ok\n");

    //4
    char str4[1000];
    char *ptr4=str4;
    int cnt=0;
    printf("Please enter a string of at least 10 chars\n");
    gets(str4);
    while(*ptr4!=0)
    {
     ptr4= ptr4+1;
     if(*ptr4=='#' || *ptr4=='^' || *ptr4=='$')
     {
         cnt++;
     }
    }
    (cnt>0)? printf("There are %d signs in the string\n", cnt): printf("There are no signs in the string\n");

    //5
    char str5[1000];
    char paste[4];
    char *ptr5=paste;
    char *pt5=str5+5;
    strcpy(paste, "ABA");

    printf("Please enter a string of at least 10 chars\n");
    gets(str5);

    *pt5=*ptr5;
    *ptr5=*pt5;
    pt5++;
    ptr5++;

    *pt5=*ptr5;
    *ptr5=*pt5;
    pt5++;
    ptr5++;

    *pt5=*ptr5;
    *ptr5=*pt5;


    printf("%s\n", str5);
    
    //6
    char str6[1000];

    printf("Please enter a string of at least 10 chars\n");
    gets(str6);

    char* ptr6 = str6 + strlen(str6);

    for (int i = strlen(str6); i >= 0; i--)
    {
        printf("%c", *ptr6);
        *ptr6 = str6[i - 1];

    }

    return 0;
}
*/