#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char sex ,sports,diet;
	float faHeight,moHeight,n;
	int tr1,tr2;
	printf("����������Ԥ����ߣ��밴˳������һ����������������\n");//��������һ��Ҫ���Ÿ���
	printf("����������Ա�M/F)\n");
	printf("�Ƿ�ϲ����������(Y/N)\n");
	printf("�Ƿ������õ���ʳϰ��(Y/N)\n");
	tr1=scanf("%c, %c, %c",&sex,&sports,&diet);
	/*while (tr1 != 3)
	{
		printf("�밴����ȷ�ĸ�ʽ��������\n");
		fflush(stdin);
		tr1 = scanf("%c, %c, %c", &sex, &sports, &diet);

	}*/
	fflush(stdin);
	printf("������������������ĸ��� ĸ�����\n");//��������һ��Ҫ�ǵ��ö��Ÿ���
	scanf("%f,%f",&faHeight,&moHeight);
	if('M'==sex)
		n =(faHeight+moHeight)*(0.54);
	else
		n=(faHeight*(0.923)+moHeight)/2;
	if('Y'==sports)
		n=1.02*n;
	if('Y'== diet)
		n=1.015*n;
	printf("���Ԥ�����Ϊ%f cm",n);
	printf("\n");
	system("pause");
}


