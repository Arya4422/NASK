#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int year, month, flag;
	printf("���������\n");
	scanf("%d",&year);
	if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
		flag = 1;
	else
		flag = 0;
	fflush;
	printf("�������·�\n");
	scanf("%d", &month);
	while ((month > 12) && (month < 1))
	{
		printf("��������·ݷǷ�������������\n");
		fflush;
		scanf("%d", &month);
	}
	switch (month)
	{
	case 1:
		printf("%d��%d����31��",year, month);
		break;
	case  2: if (0 == flag)
		printf("%d��%d����29��",year, month);
		   else
		printf("%d��%d����28��", year,month);
		break;
	case 3 : 
		printf("%d��%d����31��", year, month);
		break;
	case 4:
		printf("%d��%d����30��", year, month);
		break;
	case 5:
		printf("%d��%d����31��", year, month);
		break;
	case 6:
		printf("%d��%d����30��", year, month);
		break;
	case 7:
		printf("%d��%d����31��", year, month);
		break;
	case 8:
		printf("%d��%d����31��", year, month);
		break;
	case 9:
		printf("%d��%d����30��", year, month);
		break;
	case 10:
		printf("%d��%d����31��", year, month);
		break;
	case 11:
		printf("%d��%d����30��", year, month);
		break;
	case 12:
		printf("%d��%d����31��", year, month);
		break;
	}
	system("pause");






}