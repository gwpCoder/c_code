#define _CRT_SECURE_NO_WARNINGS 1 



#include<stdio.h>

           //3�ַ��������Լ���� 
void test1(int x, int y)
{
    //��һ������������
    int i = 0;
    int count = 0;
    for (i = y; i > 0; i--)
    {
        count++;
        if (x % i == 0 && y % i == 0)
        {
            printf("����%d��������Լ��Ϊ��%d\n", count, i);
            break;
        }

    }

}
void test2(int x, int y)
{
    //������շת�����
    int ret = 1;
    int count = 0;
    while (ret)
    {
        ret = x % y;   //x%y!=0  y��x,������y,ѭ��
        x = y;
        y = ret;
        count++;
    }
    printf("շת%d��������Լ��Ϊ��%d\n", count, x);

}

void test3(int x, int y)
{
    //�������   ��շת����
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
    printf("����%d��������Լ��Ϊ��%d\n", count, x);

}    
int main()     
{
    
    int x = 0, y = 0,tmp=0;
    printf("��������Ҫ�����Լ��������>");
    scanf("%d%d", &x, &y);   //tmp=a;a=b;b=tmp
     y = x > y ?y: (tmp=x,x=y,tmp);  //�ҳ���С������y��
     test1(x, y);
     test2(x, y);
     test3(x, y);



}
