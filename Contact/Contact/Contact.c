#include"Contact.h"
void InitContact(struct Contact* ps)
{
	//memset(ps->peo, 0, sizeof(ps->peo));
	//ps->size = 0;
    //开辟动态内存
	ps->peo = (peo*)malloc(sizeof(peo) * 3);
	if (ps->peo == NULL)
		return;
	ps->len = 3;
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if (ps->size == ps->len)
	{
		peo* ptr = (peo*)realloc(ps->peo, sizeof(peo) * (ps->len + 2));
		if (ptr != NULL)
		{
			ps->peo = ptr;
			ps->len += 2;
			printf("增加内存成功\n");
		}
	}
	/*if (ps->size == MAX)
	{   
		printf("通讯录储存已满\n");
	}*/
	else
	{
		printf("请输入要储存人信息\n");
		printf("姓名：");
		scanf("%s", ps->peo[ps->size].name);
		printf("性别：");
		scanf("%s", ps->peo[ps->size].sex);
		printf("年龄：");
		scanf("%d", &(ps->peo[ps->size].age));
		printf("电话：");
		scanf("%s", ps->peo[ps->size].tel);
		printf("地址：");
		scanf("%s", ps->peo[ps->size].addr);
		ps->size++;
	}
}
void ShowContact(const struct Contact*ps)
{
	if (ps->size == 0)
		printf("通讯录为空\n");
	int i = 0;
	printf("%10s\t%4s\t%3s\t%13s\t%20s\t\n", "姓名","性别","年龄","号码","地址");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-10s\t%-4s\t%-10d\t%-20s\t%-20s\t\n",
			ps->peo[i].name,
			ps->peo[i].sex,
			ps->peo[i].age,
			ps->peo[i].tel,
			ps->peo[i].addr);
	}
}
void DelContact(struct Contact*ps)
{
	int i = 0,j=0;
	char name[MAX_NAME];
	if (ps->size == 0)
	{
		printf("无联系人可删除\n");
		return 0;
	}
	printf("请输入你要删去联系人姓名:>");
	scanf("%s", name);
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->peo[i].name, name))//无法删除2个名字相同的人，需改进
		{
			for (j = i; j < ps->size-1;j++)
			ps->peo[j] = ps->peo[j+1];
			printf("删除成功\n");
			ps->size--;
			return 0;
		}	
	}
	printf("该联系人不存在，请重新输入\n");
}
int FindContact(const struct Contact*ps)
{
	int i = 0;
    char name[MAX_NAME];
	scanf("%s", name);
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->peo[i].name, name))
		{
			printf("%10s\t%4s\t%3s\t%13s\t%20s\t\n", "姓名", "性别", "年龄", "号码", "地址");
			printf("%-10s\t%-4s\t%-10d\t%-20s\t%-20s\t\n",
				ps->peo[i].name,
				ps->peo[i].sex,
				ps->peo[i].age,
				ps->peo[i].tel,
				ps->peo[i].addr);
			return i;
		}
	}
	return -1;
}
void SearchContact(const struct Contact*ps)
{
	printf("请输入你要查找的联系人:>");
	if (-1==(FindContact(ps)))
	printf("该联系人不存在\n");
}
void ModifyContact(struct Contact*ps)
{
	printf("请输入你要修改联系人名字:>");
	int i=FindContact(ps);
	if (i==-1)
	printf("该联系人不存在\n");
	else
	{
		printf("姓名：");
		scanf("%s", ps->peo[i].name);
		printf("性别：");
		scanf("%s", ps->peo[i].sex);
		printf("年龄：");
		scanf("%d", &(ps->peo[i].age));
		printf("电话：");
		scanf("%s", ps->peo[i].tel);
		printf("地址：");
		scanf("%s", ps->peo[i].addr);
		printf("%10s\t%4s\t%3s\t%13s\t%20s\t\n", "姓名", "性别", "年龄", "号码", "地址");
		printf("%-10s\t%-4s\t%-10d\t%-20s\t%-20s\t\n",
			ps->peo[i].name,
			ps->peo[i].sex,
			ps->peo[i].age,
			ps->peo[i].tel,
			ps->peo[i].addr);
	}

}
int sort_name(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->peo->name,((struct Contact*)e2)->peo->name);
	//strcmp函数包含在string.库函数中比较字符 
}
int sort_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->peo->age - ((struct Contact*)e2)->peo->age;
}
void SortContact(struct Contact*ps)
{
	if (ps->size < 2)
	{
		printf("无可排序\n");
		return 0;
	}
	int input = 0;
	printf("****  1.按名字排  2.按年龄排  ****\n");
	printf("请选择你要排序标准:>");
	scanf("%d", &input);
	int(*ret[3])(const void* e1, const void* e2) = { 0, sort_name, sort_age };
	int sz = sizeof(&(ps->peo)) / sizeof(ps->peo[0]);
	qsort(ps,sz,sizeof(ps->peo[0]),ret[input]);
	printf("排序成功\n");
	
}
void freeContact(struct Contact*ps)
{
	free(ps->peo);
	ps->peo = NULL;
	printf("清除内存成功\n");
}