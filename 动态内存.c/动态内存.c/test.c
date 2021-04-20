#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i = 0;
	int*p=(int*)malloc(4 * 10);//创建动态内存；void* malloc（size_t）堆区
	if (p != NULL)   //若内存不够，创建失败，P=NULL；
	{
		for (i = 0; i < 10; i++)
		{
			*(p + i) = 0;
			printf("%d ", *(p + i));
		}
	}
	else
	{
		printf("%s",strerror(errno));//打印错误；
	}
	free(p);//释放内存，
	p = NULL;//拉黑找不到该地址
	int* q=(int*)calloc(10, sizeof(int));
	//创建内存并初始化为0；
	realloc(q,30);//改变内存大小；realloc(要更改的内存地址,改变后的字节大小)
	return 0;
}
