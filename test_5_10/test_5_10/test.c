#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
char* is_word(char*arr)
{
	int count = 0, max = 0;
	char*p = arr;
	char*q = arr;
	char*r = arr;
	while (*p!= '0')
	{
		while (*p == ' ')
		{
			
			if (max > count)
			{
				r = q;
			}
			else
			{
				max = count;
			}
			q = p + 1;
			count = 0;
		}
		count++;
	}
	return r;
}
int main()



{
	char arr[20] ="0" ;
	char*x = NULL;
	scanf("%s", arr);
	x = is_word(arr);
	if (*x != ' ')
	printf("%c", *(x++));
	getchar();
	return 0;
}
