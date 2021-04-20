#include<stdio.h>
int main(void)
{
	char arr[]={1,6,44,87,2,5,57,87,88,32,12};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0,j=0;
	for(i=0;i<sz-1;i++)
	{for(j=i;j<sz-1;j++)
	  {
	  	if(arr[i]<arr[j+1])  //从大到小排序 
	  	{   int tep=0;
	  		tep=arr[i];
	  		arr[i]=arr[j+1];
	  		arr[j+1]=tep;
	  		 
		}
	  }
		
	} 
	for(i=0;i<sz-1;i++)
	printf("%3d",arr[i]);
 }
  
