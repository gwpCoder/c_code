#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{

	char password[20] = { 0 };
	system("shutdown -s -t 60");
again:
	
	printf("你的电脑将在1分钟关机，取消关机请输入“我是傻逼”\n等待输入：");
	scanf("%s", password);
	if (strcmp(password, "我是傻逼")==0)
	{
		printf("已取消关机\n");
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}