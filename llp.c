#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char  n;
	printf("������һ���ַ�\n");
	n = getchar();
	if (n >= '0' && n <= '9')
	{
		printf("���ַ�Ϊ��ѧ�ַ�\n");
	}
	else if (n >= 'A' && n <= 'Z')
	{
		printf("���ַ�Ϊ��д��ĸ\n");
	}
	     else if (n >= 'a' && n <= 'z')
		printf("���ַ�ΪСд��ĸ");
	          else   if (' ' == n)
		printf("���ַ�Ϊ�ո�");
	                 else  printf("���ַ�Ϊ�����ַ�");
		system("pause");

}