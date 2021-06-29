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


//int main()
//{
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//
//int main()
//{
//	int a = 0x0012ff33;
//	//int* pa = &a;
//	char *pc = &a;
//	//*pa = 1;
//	*pc = 1;
//
//
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	char c = 1;
//	int* pa = &a;
//	char* pc = &c;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


//
//int main()
//{
//	int* a ;
//	*a = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int *pa = arr;   //数组名就是arr[0]地址
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(pa++)= i;
//		
//	}
//
//
//	return 0;
//}


//int* test()
//{
//	int a = 10;  //作用域在test内，出test函数，a 空间由操作系统收回
//	int* pa = &a;
//	return pa; 
//}
//int main()
//{
//	int *pa=test();
//	 *pa = 11;
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = NULL;
//	int i = 0;
//	for (pa = arr; pa < &arr[10];)
//	{ 
//		*pa++ = 1;
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello";
//	char* p = arr;
//	char* q = arr;
//	int ret;
//	while (*q != '\0')  
//	{
//		q++;
//	}
//	printf("%d ", q-p);
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = &arr;   //&数组名，整个数组的地址。
//	printf("arr:\t%p\n", arr);
//	printf("arr+1:\t%p\n", arr+1);
//	printf("&arr:\t%p\n", &arr);
//	printf("&arr+1:\t%p\n", &arr+1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 }; 
//	int* p = arr;    //指针存放数组首元素的地址   
//	int sz = sizeof(arr)/sizeof(arr[0]);  
//	int i = 0;
//	for(i=0; i<sz; i++)  
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}    
//	return 0;
//}


int main()
{
	int a = 0;
	int* pa = &a;  //一级指针   
	int** ppa = &pa; //二级指针
	**ppa = 10;
	return 0;
}