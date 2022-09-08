#include <stdio.h>
#pragma warning(disable : 4996)

int main2()
{
    //1
    int var = 123;
    printf("%d \n",var);

    //2
    short num1 = 13;
    short num2 = 35;
    short sum = num1 + num2;
    printf("%d \n", sum);

    //3
    unsigned long carPrice = 140000;
    unsigned short shoopingPrice = 3000;
    long salleryValue = 10000;
    long total = salleryValue - (carPrice + shoopingPrice);
    printf("The car price is %d, the shopping price is %d, my sallery is %d so total is: %d", carPrice, shoopingPrice, salleryValue, total);

    return 0;
}
