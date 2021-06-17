#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>


//int main()
//{
//	int day = 6;
//	if (day > 5)
//	{
//		printf("周末\n");
//		printf("偷偷学习\n");
//	}     
//	else
//		printf("工作日\n");
//	   
//	return 0;
//}


//int max1(int x, int y)
//{
//	if (x > y)
//		return x;
//	return y;
//}
//int max2(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int x = 3;
//	int y = 5;
//	max1(x, y);
//
//	return 0;
//}


//int main()
//{ 
//	//输入1~7的整型数打印对应的星期数
//	int day = 0;
//	printf("请输入你要打印的星期数（0~7）>");
//	scanf("%d", &day);  
//	switch (day)      
//	{
//	case 1: printf("星期一\n");  
//	    break;
//	case 2: printf("星期二\n");
//		break;
//	case 3: printf("星期三\n");
//		break;
//	case 4: printf("星期四\n");
//		break;
//	case 5: printf("星期五\n");
//		break;
//	case 6: printf("星期六\n");
//		break;
//	case 7: printf("星期天\n");
//		break;
//	default: printf("输入有误，请输入1~7");
//		break;
//
//	}



//int main()
//{
//	int a = 1, b = 0;
//	switch (a)
//	{
//	case 0:  a++;           
//	case 1:  a++;             // a=2
//	case 3:  a++, b++;        // a=3,b=1
//	default : 
//		switch (b)          
//		{
//		case 1: a++;         // a=4
//		case 2: b++; a++;    // b=2,a=5
//		case 3: a++;         // a=6
//			break;
//		}
//	case 4:  b++;            // b=3
//		break;
//	}
//
//	return 0;
//}


//int main()
//{     //代码行数l=20000成为编程大牛
//	int l = 0;
//	while (l<20000)
//	{
//		printf("代码行数l=%d\n", l);
//		l++;    //敲一行代码
//	}
//
//	if (l >= 20000)
//	{
//		printf("编程大牛\n");
//	}
//
//	return 0;
// 
//}




int main()
{
	int l = 0;  //代码行数
	int d = 0;  //编程等级
	while (l < 2000)
	{
		if (l == 100)
		{
			d++;
		   //break;
			continue;
			
		}
		l++;
	}
	printf("代码行数%d  编程等级%d", l, d);

	return 0;
}
