#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//原理摸牌插牌
//复杂结构简单化 分成很多个简单步骤 
//假设前end个有序end+1插入[0,end]中
//void chapai(int *arr, int x)
//{   //时间复杂度O(n^n);
//	int i = 0, end = 0, tmp = 0;
//	for (i = 0; i<x - 1; i++)//摸牌控制已排序数i<x+1 最大end=i=x-1-1; 
//		//arr[end+1]即是最后一个元素
//	{
//		end = i;
//		tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)//升序
//			{
//				arr[end + 1] = arr[end];//右移便于插入
//				end--;
//			}
//			else
//			{
//				break;
//				//找到了位置
//			}
//		}
//		arr[end + 1] = tmp;//1,中途找到了
//		                   //2,没找到，该牌插入到最前
//	}
//	return;
//}

//希尔排序
// 将一组数分成多组， 先预排序——>基本有序-—>插排
//时间复杂度O(n*logn);
void xier(int *arr, int x)
{  
	// 1,2,3,4,5,6,7,8,9,10;
	//以glapw为间隔 为一组 
	//eg: glap=3;
	// 1,4,7,10;2,5,8;3,6,9;分别插排
	int glap = x;
	while (glap > 1)//当glap>1 预排序 注意 当glap=2时 进入后glap=1 插入排序
	{
		glap = glap/ 2;//重点
		//glap越小越接近有序
		for (int i = 0; i < x - glap; i++) //多组同时排序 结束条件 end+glap=x-1;所以i=end=x-1;
		{
			int end = i;	
			int tmp = arr[end + glap];
			while (end>=0)
			{
				if (arr[end] > tmp)
				{
					arr[end + glap] = arr[end];
					end-=glap;
				}
				else
				{
					break;
				}
			}
			arr[end + glap] = tmp;
		}

	}
	
}
void PrintArr(int *arr, int x)
{
	for (int i = 0; i < x; i++)
	printf("%d ", arr[i]);
	printf("\n");
}
void test1()
{
	int arr[] = { 2, 5, 6, 3, 4, 7, 8, 1, 9, 0 };
	int sz = sizeof(arr) / sizeof(int);
	//chapai(arr, sz);
	xier(arr, sz);
	PrintArr(arr, sz);
}
int main(void)
{
	test1();
	getchar();
	return 0;
}