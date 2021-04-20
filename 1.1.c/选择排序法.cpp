#include<stdio.h>  //重点；固定一个数不动与其它数比较（数组标号不变交换）3 6 1 7 8 3 
int main(void)														//	第一个数和后面的数比较然后交换直到第一个数最小			
{	int flag=0; //优化同冒泡 
	int i=0,j=0,temp=0,arr[]={5,6,7,8,8,9,1,5,8,9,2};			//冒泡；从第一个数与和一个数比较然后交换第二比第三依次下去直到最后一个数最大 
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz-1;i++) //确定比较次数 
	{ 	
		for(j=i+1;j<sz;j++) //每次比较的比较个数 
	{
		if(arr[i]>arr[j])//从小到大排 
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		flag=1; 
	}
	}
	if(flag==0)
	break;
	}
	for(i=0;i<sz;i++)
	printf("%4d",arr[i]);
	return 0;
 } 
