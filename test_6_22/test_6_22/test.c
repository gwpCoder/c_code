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
//		printf("请输入你的数字\n");
//		scanf("%d", &gass);
//		if (gass < x)
//		{
//			printf("猜小了\n");
//		
//		}
//		else if (gass > x)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜，猜对了\n");
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
//	printf("请选择（1/0）>");
//}
//void game()
//{
//	int x = rand()%100+1;  //每局游戏生成一个1~100随机数，
//				   //切勿放入循环部分产生bug
//	while (1)
//	{
//		int gass = 0;
//		printf("请输入你要猜的数字(1~100)>");
//		scanf("%d", &gass);  //猜数字  
//		if (x > gass)   //随机数大于你猜测的数
//		{
//			printf("猜小了\n");
//		}
//		else if (x < gass)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;  //猜对了，本局游戏结束，退出循环
//		}
//	}
//}
//int main()
//{
//	//猜数字游戏
//
//	srand((unsigned int)time(NULL));  //设置随机生成器起始点
//	int input = 0;
//	do
//	{
//		menu();
//	   scanf("%d",&input);
//	   switch (input)
//	   {
//	   case 1:game();
//		   break;
//	   case 0:printf("退出游戏\n");
//		   break;
//	   default:printf("输入错误，请重新输入\n");
//	   }
//	} while (input);
//	
//	return 0;
//}



//
//int main()
//{
//	//1~100 9出现的次数
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
//{      //质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；
//	  //否则称为合数（规定1既不是质数也不是合数）。
//	  //打印素数100~200
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