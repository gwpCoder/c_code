#include<stdio.h>
void bubble_sort(int arr[],int sz)//重点 
{	int i=0;
for(i=0;i<sz-1;i++)//确定趟数 
{
	int flag=1;//假设已经有序 
	int j=0;
	for(j=0;j<sz-1-i;j++)//每躺比较次数 
	{
		if(arr[j]>arr[j+1])//交换 （从小到大排序） 
		{
			int	temp=0;
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			flag=0;//本躺不完全有序 
		}
	}
	if(flag==1)
	break;//跳出循环 （少了比较）优化 

}
}
int main(void)
{
	int arr[]={9,4,5,6,3,7,2,0,8,1};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);//冒泡排序函数 
	for(i=0;i<sz;i++)
		printf("%5d",arr[i]);
	return 0;
}

