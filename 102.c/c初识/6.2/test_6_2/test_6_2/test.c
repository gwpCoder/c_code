#define _CRT_SECURE_NO_WARNINGS 1

//������
#include <stdio.h>
//stdio - ��׼�������

//int - ���� -����������
//main���� - �������ǳ�������
//���ҽ���һ��������

//int main()
//{
//	//�⺯�� - ��ӡ���� - �������
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;
//}

//void - ��ȷ�ĸ������ǣ�main��������Ҫ����
//int main(void)
//{
//	return 0;
//}
// 
//main������ʵ�ǿ����в�����
// 

//int main(int argc, char* argv[])
//{
//
//	return 0;
//}
//F10 
// 
//Ctrl + F5
//FN + Ctrl + F5

//��ʱ��
//void main()
//{
//
//}

//int main()
//{
//	int age = 10;
//	int price = 50;
//	double weight = 55.5;//double-˫���ȸ�����
//
//	return 0;
//}
//
//int main()
//{
//	//��μ���һ�����ʹ����ı�����ռ�ռ�Ĵ�С�أ�
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	//sizeof();
//	//%d - ����
//	//%c - �ַ�
//	//printf("%d\n", 100);
//	//printf("%c\n", 100);
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 'e';
//	printf("%c\n", ch);//e
//	printf("%d\n", ch);//101
//
//	//abcdef!@#$ �ַ�
//	//������
//	//'a'
//	//'#'
//	//a-97
//	//b-98
//	//c-99
//	//d-100
//	//e   -101
//	//�ַ�-ASCII��
//	//...
//	//ASCII ����
//	//
//	return 0;
//}
//
//int main()
//{
//	//age�Ǳ���
//	short age = 10;
//	age = 11;
//	printf("%d\n", age);
//
//	//float weight;
//	//char sex = 'm';
//
//	return 0;
//}


//int g = 100;//ȫ�ֱ���
//
//void test()
//{
//	int b = 1000;
//}
//
//int main()
//{
//	int a = 10;//�ֲ�����
//
//	return 0;
//}

//
//int a = 100;//ȫ�ֱ���
//
//int main()
//{
//	int a = 10;//�ֲ�����
//	printf("%d\n", a);//?
//	return 0;
//}


int main()
{
	//2���������
	int num1 = 0;
	int num2 = 0;
	//����
	scanf("%d,%d", &num1, &num2);
	//���ӷ�
	int sum = num1 + num2;
	//���
	printf("%d\n", sum);

	return 0;
}

//newc++file.cpp
//����һ�仰��#define _CRT_SECURE_NO_WARNINGS 1
