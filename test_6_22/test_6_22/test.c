#define _CRT_SECURE_NO_WARNINGS 1 


//void menu()
//{
//	printf("**************************\n");
//	printf("******  1.paly     *******\n");
//	printf("******  0.exit     *******\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int gass = 0;
//	int x= rand() % 100 + 1;
//	
//	while (1)
//	{
//		printf("�������������\n");
//		scanf("%d", &gass);
//		if (gass < x)
//		{
//			printf("��С��\n");
//		
//		}
//		else if (gass > x)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ���¶���\n");
//			break;
//		}
//
//	}
//	
//}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//void menu()
//{
//	printf("**************************\n");
//	printf("******  1.paly     *******\n");
//	printf("******  0.exit     *******\n");
//	printf("**************************\n");
//	printf("��ѡ��1/0��>");
//}
//void game()
//{
//	int x = rand()%100+1;  //ÿ����Ϸ����һ��1~100�������
//				   //�������ѭ�����ֲ���bug
//	while (1)
//	{
//		int gass = 0;
//		printf("��������Ҫ�µ�����(1~100)>");
//		scanf("%d", &gass);  //������  
//		if (x > gass)   //�����������²����
//		{
//			printf("��С��\n");
//		}
//		else if (x < gass)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;  //�¶��ˣ�������Ϸ�������˳�ѭ��
//		}
//	}
//}
//int main()
//{
//	//��������Ϸ
//
//	srand((unsigned int)time(NULL));  //���������������ʼ��
//	int input = 0;
//	do
//	{
//		menu();
//	   scanf("%d",&input);
//	   switch (input)
//	   {
//	   case 1:game();
//		   break;
//	   case 0:printf("�˳���Ϸ\n");
//		   break;
//	   default:printf("�����������������\n");
//	   }
//	} while (input);
//	
//	return 0;
//}



//
//int main()
//{
//	//1~100 9���ֵĴ���
//
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//
//	}
//	printf("%d ", count);
//	return 0;
//}
//int main()
//{      //�����ֳ�������һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ��������������������
//	  //�����Ϊ�������涨1�Ȳ�������Ҳ���Ǻ�������
//	  //��ӡ����100~200
//	int i = 0;
//	
//	for (i = 101; i <= 200; i+=2)
//	{   
//		int j = 0;
//		int flag = 0;
//		for (j = 2; j < sqrt((double)i); j++)   //
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//			printf("%d ", i);
//
//	}
//
//
//}



//int main()
//{
//	 
//	srand((unsigned int)time(NULL));
//	 int i = 0;
//     for(i=0;i<100;i++)
//	{
//		// srand((unsigned int)time(NULL));
//		int  x = rand();
//		printf("%d ", x);
//	}
//
//	return 0;
//}
#include<stdio.h>
int main()
{

	int x = 5, y = 7, z = 8;
	 z+= x++ || y++ || ++z;
	printf("x=%d,y=%d z=%d", x, y, z);
	return 0;
}