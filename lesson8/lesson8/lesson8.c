#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)


int main_8_3()
{
	char ch;
	ch = 65; // A character
	char ch2;
	ch2 = 'X';

	// %c -> print character
	// %s -> print string
	// %d -> print digits
	printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%c\n", ch2);
	printf("%d\n", ch2);

	char ch3;
	for (int i = 65; i <= 90; i++)
	{
		ch3 = i;
		printf("%d:%c\n", ch3, ch3);
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		printf("%d:%c\n", i, i);
	}

	ch = 'A';

	// array of char String
	char str[11];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'A';
	str[3] = ' ';
	str[4] = 'S';
	str[5] = 'H';
	str[6] = 'A';
	str[7] = 'L';
	str[8] = 'O';
	str[9] = 'M';
	str[10] = 0; // 0 is the end of string NULL

	int pos;
	scanf("%d", &pos);
	str[pos] = 0;
	printf("%s %c", str, str[8]);

	// array of char String
	char str1[100];
	int num;
	// &num -> address of num location
	// str -> address of array
	// srr = &str[0]
	
	//scanf("%d", &num);
	// to get string from user
	gets(str1);

	printf("%s", str1);


	char str3[100];
	gets(str3);
	int a;

	// returns the length of string
	a = strlen(str3);

	for (int i = 0; i < a; i++)
	{

	}

	char str2[100];
	// copy string into other string
	strcpy(str2, "AbraKadabra");
	strcpy(str2, str);
	strcpy(str2, "Kuku");

	// append the string at the end of the destination string
	strcat(str2, " ");
	strcat(str2, str);
	strcat(str2, " ");
	strcat(str2, ".");

	// compare 2 strings and returns
	// 0 if strings are equal
	// 0< str1 less than str2
	// 0> str2 less than str1
	a = strcmp("ABC", "ABC");
	a = strcmp(str2, "ABc");
	a = strcmp("ABc", str);

	return 0;
}