#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{

	char password[20] = { 0 };
	system("shutdown -s -t 60");
again:
	
	printf("��ĵ��Խ���1���ӹػ���ȡ���ػ������롰����ɵ�ơ�\n�ȴ����룺");
	scanf("%s", password);
	if (strcmp(password, "����ɵ��")==0)
	{
		printf("��ȡ���ػ�\n");
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}