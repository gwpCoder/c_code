#define _CRT_SECURE_NO_WARNINGS 1 



#include<stdio.h>

           //3种方法求最大公约数的 
void test1(int x, int y)
{
    //法一：暴力遍历法
    int i = 0;
    int count = 0;
    for (i = y; i > 0; i--)
    {
        count++;
        if (x % i == 0 && y % i == 0)
        {
            printf("暴力%d次求得最大公约数为：%d\n", count, i);
            break;
        }

    }

}
void test2(int x, int y)
{
    //法二：辗转相除法
    int ret = 1;
    int count = 0;
    while (ret)
    {
        ret = x % y;   //x%y!=0  y给x,余数给y,循环
        x = y;
        y = ret;
        count++;
    }
    printf("辗转%d次求得最大公约数为：%d\n", count, x);

}

void test3(int x, int y)
{
    //更相减损法   与辗转类似
   int  ret = 1;
   int  count = 0;
   int tmp = 0;
    while (ret)
    {
        ret = x - y;
        x = y;
        y = ret;
        y = x > y ? y : (tmp = x, x = y, tmp);
        count++;
    }
    printf("更相%d次求得最大公约数为：%d\n", count, x);

}    
int main()     
{
    
    int x = 0, y = 0,tmp=0;
    printf("请输入你要求最大公约数的两数>");
    scanf("%d%d", &x, &y);   //tmp=a;a=b;b=tmp
     y = x > y ?y: (tmp=x,x=y,tmp);  //找出最小数放入y中
     test1(x, y);
     test2(x, y);
     test3(x, y);



}
