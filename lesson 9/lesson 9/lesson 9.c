#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	char word[1000];
	strcpy(str, "abc111*1234VVV*111*aa");
	//abc111\n
	//1234vvv\n
	//111\n
	//aa
	int len = strlen(str);
	char* ptr = str;
	char* startWordPtr = str;

	//"abc*1234*111*aa"
	for (int i = 0; i < len; i++)
	{
		if (*ptr == '*')
		{
			// found *, end of word
			int wordLen = ptr - startWordPtr;
			strncpy(word, startWordPtr, wordLen);
			word[wordLen] = 0; // 0 = NULL
			
			printf("%s\n", word);

			startWordPtr = startWordPtr + wordLen + 1;
		}

		ptr++;
	}

	printf("%s\n", startWordPtr);

	return 0;
}