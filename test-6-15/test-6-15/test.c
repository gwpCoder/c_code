#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
//int  test1()
//{
//	int x = 1;
//	 x++;
//	 return x;
//}
//
//int  test2()
//{
// static int x = 1;
//	  x++;
//	  return x;
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", test1());
//
//	 printf("\n");
//
//	for (i = 0; i < 10; i++)
//		printf("%d ", test2());
//
//	return 0;
//
//}



//extern int g;
//
//int main()
//{
//   
//	printf("%d", g);
//	return 0;
//}
//
//
//


//int main()
//{
//	int i = 0, j = 0, sum = 0;  //���������ȳ�ʼ������ϰ��
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; i++)    //���ѭ��������
//	{
//		for (j = 0; j < 5; j++)   //�ڲ�ѭ��������
//		{
//			scanf("%d", &arr[i][j]);   //����������ֵ
//
//			if (i == j)        //�ж����Խ���Ԫ��
//			{
//				//���
//				sum += arr[i][j]; 
//			}
//		}
//	}
//	printf("sum=%d", sum);
//
//
//	return 0;
//}

//int fun(int n)
//{
//	int i = 0,p=1;
//	for (int i = 1; i <= n; i++)
//	{
//		p *= i;
//	}
//	return p;
//}
//int main()
//{
//	int n = 0, i = 0,j=0,ret=0, sum = 0;
//	scanf("%d",&n);
//	for (j = n; j > 0; j--)
//	{
//		    ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("1!+2!+3��+...n!=%d\n",sum);
//}







int main()
{
	int x = 0, y = 0, z = 0;
	(++x || ++y) && ++z;

}