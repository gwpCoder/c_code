#include"Contact.h"
void InitContact(struct Contact* ps)
{
	//memset(ps->peo, 0, sizeof(ps->peo));
	//ps->size = 0;
    //���ٶ�̬�ڴ�
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
			printf("�����ڴ�ɹ�\n");
		}
	}
	/*if (ps->size == MAX)
	{   
		printf("ͨѶ¼��������\n");
	}*/
	else
	{
		printf("������Ҫ��������Ϣ\n");
		printf("������");
		scanf("%s", ps->peo[ps->size].name);
		printf("�Ա�");
		scanf("%s", ps->peo[ps->size].sex);
		printf("���䣺");
		scanf("%d", &(ps->peo[ps->size].age));
		printf("�绰��");
		scanf("%s", ps->peo[ps->size].tel);
		printf("��ַ��");
		scanf("%s", ps->peo[ps->size].addr);
		ps->size++;
	}
}
void ShowContact(const struct Contact*ps)
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	int i = 0;
	printf("%10s\t%4s\t%3s\t%13s\t%20s\t\n", "����","�Ա�","����","����","��ַ");
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
		printf("����ϵ�˿�ɾ��\n");
		return 0;
	}
	printf("��������Ҫɾȥ��ϵ������:>");
	scanf("%s", name);
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->peo[i].name, name))//�޷�ɾ��2��������ͬ���ˣ���Ľ�
		{
			for (j = i; j < ps->size-1;j++)
			ps->peo[j] = ps->peo[j+1];
			printf("ɾ���ɹ�\n");
			ps->size--;
			return 0;
		}	
	}
	printf("����ϵ�˲����ڣ�����������\n");
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
			printf("%10s\t%4s\t%3s\t%13s\t%20s\t\n", "����", "�Ա�", "����", "����", "��ַ");
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
	printf("��������Ҫ���ҵ���ϵ��:>");
	if (-1==(FindContact(ps)))
	printf("����ϵ�˲�����\n");
}
void ModifyContact(struct Contact*ps)
{
	printf("��������Ҫ�޸���ϵ������:>");
	int i=FindContact(ps);
	if (i==-1)
	printf("����ϵ�˲�����\n");
	else
	{
		printf("������");
		scanf("%s", ps->peo[i].name);
		printf("�Ա�");
		scanf("%s", ps->peo[i].sex);
		printf("���䣺");
		scanf("%d", &(ps->peo[i].age));
		printf("�绰��");
		scanf("%s", ps->peo[i].tel);
		printf("��ַ��");
		scanf("%s", ps->peo[i].addr);
		printf("%10s\t%4s\t%3s\t%13s\t%20s\t\n", "����", "�Ա�", "����", "����", "��ַ");
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
	//strcmp����������string.�⺯���бȽ��ַ� 
}
int sort_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->peo->age - ((struct Contact*)e2)->peo->age;
}
void SortContact(struct Contact*ps)
{
	if (ps->size < 2)
	{
		printf("�޿�����\n");
		return 0;
	}
	int input = 0;
	printf("****  1.��������  2.��������  ****\n");
	printf("��ѡ����Ҫ�����׼:>");
	scanf("%d", &input);
	int(*ret[3])(const void* e1, const void* e2) = { 0, sort_name, sort_age };
	int sz = sizeof(&(ps->peo)) / sizeof(ps->peo[0]);
	qsort(ps,sz,sizeof(ps->peo[0]),ret[input]);
	printf("����ɹ�\n");
	
}
void freeContact(struct Contact*ps)
{
	free(ps->peo);
	ps->peo = NULL;
	printf("����ڴ�ɹ�\n");
}