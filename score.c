#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,t;//n��ʾ�����score
	printf("��������ĳɼ�(ע������Ϊ1��100��������\n");
	scanf_s("%d", &n);
	t = (n > 100) || (n < 0);
	while ( t )
	 {
			printf("�������볬����Χ������������\n");
			fflush(stdin);
			scanf_s("%d", &n);
         	t = (n > 100) || (n < 0);	
	}
	if (n >= 90 && n <= 100)
		printf("��ĳɼ��ȼ��������ΪA\n");
	else if (n >= 80 && n < 90)
		printf("��ĳɼ��������ΪB\n");
	else if (n >= 70 && n < 80)
		printf("��ĳɼ��������ΪC\n");
	else if (n >= 60 && n < 70)
		printf("��ĳɼ��������ΪD\n");
	else if (n >= 0 && n < 60)
		printf("��ĳɼ��������ΪE\n");
	    
	system("pause");


}