#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


#include<stdlib.h>
#include<time.h>
#include<assert.h>
int BinarySearch(int*arr,int sz,int x)
{
	int left = 0, right = sz - 1;
	
		
	while (left <= right)    //>=
	{
		int mid = (right + left)/ 2;  //
		if (x > arr[mid])
		{
			left = mid + 1;
			
	    }
		else if(x<arr[mid])
		{
			right = mid - 1;

		}
		else
		{
			return mid;
		}
	}
 return -1;
}
void BubbleSort(int* arr, int sz)
{
	assert(arr);   //断言
	int i = 0, j = 0;
	int flag = 0;
	for (i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)  //sz-1趟
		{   
			
			if (arr[j] > arr[j + 1])  //比较，交换
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;   
			}
		}
		if (flag = 0)  //说明已经有序
			break;
	}
	for(i=0;i<sz;i++)
	printf("%d ", arr[i]);

}

int main()
{
	//冒泡排序
	srand((unsigned int)time(NULL));
	int  arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 10; i++)
		arr[i] = rand()%100+1;
	 BubbleSort(arr,sz);
	 int x = 0;
	 printf("\nInput:");
	 scanf("%d", &x);
	 int q = BinarySearch(arr, sz, x);
	     
	 if (q!=-1)//有序数组，二分查找。
	 {
		 printf("找到了，下标为%d\n", q);
	 }
	 else
	 {
		 printf("找不到\n");
	 }
	return 0;


}
