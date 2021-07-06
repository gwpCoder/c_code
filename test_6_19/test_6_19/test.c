#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
////#include <stdlib.h> 
//#include<Windows.h>
// //利用goto语句实现关机恶搞程序！
//int main()
//{   
//	char password[20] = { 0 };
//	
//	system("shutdown -s -t 60");
//ag:
//	printf("电脑将在1分钟内自动关机，请在1分钟内输入 我是猪 ，取消关机\n");
//	scanf("%s", password);
//	if (strcmp(password, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{ 
//	goto ag;
//	}
//	 printf("已取消关机\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (6==i)
//		{
//			printf("six ");
//			//break;
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//
//	
//	for (;;)
//	{
//		printf("想你的夜\n");
//	}
//	return 0;
//
//}


//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0, j = 0; i < 6&&j < 3; i++, j++)
//	{
//		printf("想你的夜\n");
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0, k = 0;
//	for (i = 1; k = 1; i++)
//	{
//		printf("hehe\n");
//	}
//	 
//	return 0;
//}


int main()
{

	int i = 0;
	do
	{
		if (i == 6)
		{ 
			printf("six ");
			//break;
			continue;
		}

		printf("%d ",i);
		i++;
		
	} while (i<=10);
}