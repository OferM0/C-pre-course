#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{

    //1
	int idx = 1;
	while (idx <= 10)
	{
		printf("%d ",idx);
		idx = idx + 1;
	}
	printf("\n");


	//2
	int idx1 = 1;
	while (idx1 <= 100)
	{
		printf("$ ");
		idx1 = idx1 + 1;
	}
	printf("\n");


	//3
	int idx2 = 1;
	while (idx2 <= 100)
	{
		printf("5 ");
		idx2 = idx2 + 1;
	}
	printf("\n");


	//4
	int idx3 = 70;
	while (idx3 <= 86)
	{
		printf("%d ", idx3);
		idx3 = idx3 + 1;
	}
	printf("\n");


	//5
	int idx4 = 1000;
	while (idx4 <= 1011)
	{
		printf("%d ", idx4);
		idx4 = idx4 + 1;
	}
	printf("\n");


	//6
	int idx5 = 10;
	while (idx5 >= 1)
	{
		printf("%d ", idx5);
		idx5 = idx5 - 1;
	}
	printf("\n");


	//7
	int idx6 = 100;
	while (idx6 <= 150)
	{
		printf("%d ", idx6);
		idx6 = idx6 + 5;
	}
	printf("\n");


	//8
	int idx7 = 0;
	int num;

	printf("Please enter a number\n");
	scanf("%d", &num);

	while(idx7 < num)
	{
		printf("Shalom ");
		idx7 = idx7 + 1;
	}
	printf("\n");


	//9
	int idx8 = 1;

	while (idx8 <= 8)
	{
		printf("%d + %d = %d\n", idx8, idx8, (idx8+idx8));
		idx8 = idx8 + 1;
	}
	printf("\n");


	//10
	int idx9;

	printf("Please enter a number\n");
	scanf("%d", &idx9);

	while (idx9 != 0)
	{
		printf("%d\n", (3*idx9));
		
		printf("Please enter a number\n");
		scanf("%d", &idx9);
	}

    return 0;
}
