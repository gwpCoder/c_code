#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
////#include <stdlib.h> 
//#include<Windows.h>
// //����goto���ʵ�ֹػ�������
//int main()
//{   
//	char password[20] = { 0 };
//	
//	system("shutdown -s -t 60");
//ag:
//	printf("���Խ���1�������Զ��ػ�������1���������� ������ ��ȡ���ػ�\n");
//	scanf("%s", password);
//	if (strcmp(password, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{ 
//	goto ag;
//	}
//	 printf("��ȡ���ػ�\n");
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
//		printf("�����ҹ\n");
//	}
//	return 0;
//
//}


//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0, j = 0; i < 6&&j < 3; i++, j++)
//	{
//		printf("�����ҹ\n");
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