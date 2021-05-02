#include<stdio.h>
int main(void)
{
    int a=0,b=0,c=0;
    
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if((a+b)>c&&(a+c)>b&&(c+b)>a)
        {
            if(a==b&&a==c&&b==c)
                printf("Equilateral triangle!\n");
            if(a==b||a==c||b==c)
                printf("Isosceles triangle!\n");
            printf("Ordinary triangle!\n");
        } 
          printf("Not a triangle!\n");     
    }
    return 0;
}
