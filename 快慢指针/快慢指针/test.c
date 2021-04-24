#include<stdio.h>  //快慢指针实现数组指定元素删除
//#define _CRT_SECURE_NO_WARNINGS 1
void arr_infor(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf_s("%d", arr + i);
	}
}
int arr_delete(int* arr, int value,int sz)
{
	int src = 0, ret = 0, end = 0;
	while (src<sz)
	if (arr[src]!= value)   //判断
	{
		src++; ret++;//同时前移
	}
	else
	{
		src++;                //先走
		arr[ret] = arr[src];  //覆盖  即删除功能
		ret++;
		src++;
		sz--;
	}
	return sz;
}
void arr_print(int*arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main(void)
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	arr_infor(arr,sz);
	int value = 0;
	scanf_s ("%d", &value);
	int rsz=arr_delete(arr,value,sz);
	arr_print(arr,rsz);
	getchar();
	getchar();
	return 0;
}