#include<stdio.h>
int main()
{
	float G,H,t;
	printf("�������غ����:\n");
	scanf("%f %f",&G,&H);
	t=G/(H*H);
	if(t<18)
		printf("ƫ�C\n");
	else if(t>=18&&t<=25)
		printf("��������\n");
	else if(t>25&&t<27)
		printf("���س���\n");
	else
		printf("����\n");
	return 0;
}