#include"Contact.h"
menu()
{
	printf("*******  1.add    2.del      ******\n");
	printf("*******  3.search 4.modify   ******\n");
	printf("*******  5.show   6.sort     ******\n");
	printf("************  0.exit  *************\n");
}
int main(void)
{   
	int input=0;
	struct Contact con;
	InitContact(&con);
	do{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case add:AddContact(&con);
			break;
		case del:DelContact(&con);
			break;
		case sea:SearchContact(&con);
			break;
		case mod:ModifyContact(&con);
			break;
		case sho:ShowContact(&con);
			break;
		case sor:SortContact(&con);
			break;
		case exi:freeContact(&con); printf("退出\n");
			break;
		default:printf("输入错误,重新输入\n");
			break;
		  
		}
	} while (input);
}