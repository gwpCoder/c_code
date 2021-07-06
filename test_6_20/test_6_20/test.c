#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()

{  
	//实现逐个字符复制
	//**********************
	//H********************!
	//He******************d!
	// 	   .......
	//Hello C language word!

	int i = 0,j=0;
	char arr1[] = "Hello C language word!";
	char arr2[] = "**********************";
	int len=strlen(arr1);
	for (i = 0; i < len/2; i++)
	{
		arr2[i] = arr1[i];
		arr2[len - i - 1] = arr1[len - i - 1];
		printf("%s\n", arr2);
		Sleep(1000);             //Sleep大写
		system("cls");
	}
	
	return 0;
}