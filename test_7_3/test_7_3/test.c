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
	assert(arr);   //����
	int i = 0, j = 0;
	int flag = 0;
	for (i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)  //sz-1��
		{   
			
			if (arr[j] > arr[j + 1])  //�Ƚϣ�����
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;   
			}
		}
		if (flag = 0)  //˵���Ѿ�����
			break;
	}
	for(i=0;i<sz;i++)
	printf("%d ", arr[i]);

}

int main()
{
	//ð������
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
	     
	 if (q!=-1)//�������飬���ֲ��ҡ�
	 {
		 printf("�ҵ��ˣ��±�Ϊ%d\n", q);
	 }
	 else
	 {
		 printf("�Ҳ���\n");
	 }
	return 0;


}
