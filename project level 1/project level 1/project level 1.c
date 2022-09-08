#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	int beforeCheck = 0;
	int sum = 0;

	char exercise[1000];
	char before[1000];
	char after[1000];
	char copy[1000];
	char action;

	before[0] = 0;
	after[0] = 0;
	action = 0;



	printf("Please enter math exercise.\n");
	gets(exercise);

	for (int i = 0; i < strlen(exercise); i++)
	{
		if (exercise[i] != '+' && exercise[i] != '-')
		{
			if (beforeCheck == 0)
			{
				copy[0] = exercise[i];
				copy[1] = 0;
				strcat(before, copy);
			}
			else
			{
				copy[0] = exercise[i];
				copy[1] = 0;
				strcat(after, copy);
			}
		}
		else
		{
			if (action == 0)
			{
				action = exercise[i];
				beforeCheck = 1;
				sum = atoi(before);
			}
			else
			{
				sum = eval(sum, action, after);
				action = exercise[i];
				after[0] = 0;
			}
		}
	}


	sum = eval(sum, action, after);

	printf("The result of your exercise is: %d", sum);



	return 0;
}

int eval(int sum, char action, char after[])
{
	int num1, num2, result = 0;
	if (action == '+')
	{
		num1 = sum;
		num2 = atoi(after);
		result = num1 + num2;
	}
	else
	{
		num1 = sum;
		num2 = atoi(after);
		result = num1 - num2;
	}
	return result;
}
