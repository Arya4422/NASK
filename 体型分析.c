#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float  w, h, t;//����Ϊw,���Ϊh
	printf("�����������ߣ�m)������(kg)\n");//�������ݶ��Ÿ���
	scanf("%f,%f", &h, &w);
	t = w / (h * h);
	if (t < 18)
		printf("����������ڵ�����\n");
	else if (t >= 18 && t < 25)
	    printf("�������������������\n");
	else if (t >= 25 && t < 27)
	    printf("����������ڳ�������\n");
	else 
		printf("����������ڷ���\n");
	//printf("t=%f", t);
	//printf("w=%f,h=%f", w, h);
	system("pause");
}