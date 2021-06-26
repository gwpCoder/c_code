#define _CRT_SECURE_NO_WARNINGS 1 



#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n%p\n", pa,pa+1);
//	printf("%p\n%p\n", pc, pc + 1);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* pc = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pc + i) = 1;
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* parr = arr;
//	printf("%d" ,(char*)& arr[9] -(char*) &arr[0]);
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 2, c = 3;
//	int* pa = &a, * pb = &b, * pc = &c;
//	int* arr[3] = {pa,pb,pc};
//	int i = 0;
//	for(i=0;i<3;i++)
//	printf("%d ", *arr[i]);
//	return 0;
//}


int main()
{

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}