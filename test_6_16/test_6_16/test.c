
#define _CRT_SECURE_NO_WARNINGS 1 


#include<stdio.h>
////int main()
////{
////
////    int i = 0; int arr[3] = { 0 };
////
////    for (i = 0; i < 3; i++)
////    {
////        scanf("%d", &arr[i]);
////    }
////    for (i = 2; i >=0; i--)
////    {
////        printf("%d ", arr[i]);
////    }
////    
//    
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{  
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 400 == 0) || (i % 100) != 0 && i % 4 == 0)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//int main()
//{   
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//
//		//if(j>=(i-1))  
//		if(j==(i-1))
//		printf("%d ", i);
//		
//	}
//	return 0;
// 
// 
//}
//int main()
//{
//	int a = 0, b = 0,i=0;
//	
//	scanf("%d%d", &a, &b);
//	int min = ((a < b) ? a : b);
//	for (i = min; i >=1 ;i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	
//	
//	return 0;
//}

//struct peo  //自定义一个结构体类型 struct peo
//{
//	char name[10];//定义一个char数组存储名字
//	char tele[11];  //存储号码
//	char sex;     //存储性别信息
//};
//int main()
//{
//	struct peo s = {  "zhangsan","10086",'x'};
//	//创建一个struct poe 类型的变量s,并初始化
//	printf("name:%s\n,tele:%s\n,sex:%c\n", s.name, s.tele, s.sex);
//   // "."结构体.成员名   
//	struct peo * ps = &s;
//	printf("name:%s\n,tele:%s\n,sex:%c", ps->name, ps->tele, ps->sex);
//    //结构体指针—>成员名
//	return 0;
//}




//int main()
//{
//	 //找出1~100中出现9的次数
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		if (i==9||i%10==9)
//		{
//			count++;
//
//		}
//	}
//	printf("1~100中9出现的次数：%d", count);
//
//	return 0;
//}
//
//
////
////int main()
//{
//	 //作业内容
//     //计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//	int i = 0,ret=0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{   
//		if (i % 2 == 0)
//			ret = -i;
//		else
//			ret = i;
//		sum = 1 /(double)ret +sum;
//    }
//	printf("1/1-1/2+.....+1/99-1/100=%lf", sum);
//	return 0;
//}


//int main()
//{  
//	//求10个数中的最大值
//	int arr[10] = { 0 };
//	int i = 0, max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		max = arr[i] > max ? arr[i] : max;
//	}
//	printf("max=%d", max);
//
//	return 0;
//}


//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)  //确定行
//	{
//		for (j = 1; j <= i; j++)  //每行打印个数
//		{
//			printf("%dx%d=%d ", i,j,i * j); 
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{

     //	编写代码在一个整形有序数组中查找具体的某个数
     //要求：找到了就打印数字所在的下标，找不到则输出：找不到
    int left = 0, right = 0, mid = 0;
    int i = 0, x = 0;
    int arr[10] = { 0 };
    int sz= sizeof(arr) / sizeof(arr[0]);
    right = sz - 1;
    for (i = 0; i <sz; i++)
    {
        arr[i] = i+1;
        printf("%d ", arr[i]);
    }
    printf("请输入你要查找的数字>");
    scanf("%d", &x);
    while (left < right)
    {     
        mid = (left + right) / 2;
        if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到了，下标为：%d", mid);
            break;      //重点
        }
    }
    if (left >= right)
    {
        printf("没找到");
    }
	return 0;
}