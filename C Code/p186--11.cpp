#include<stdio.h>
int Score[5][4];
void input()
{
	int i,j;
	extern int Score[5][4];
	printf("����һ������:");
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
			scanf("%d",&Score[i][j]);
}
void notEnough()
{
	int i,j,counter=0;
	extern int Score[5][4];
	void input();
	input();
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			if(Score[i][j]<60)
				++counter;
			printf("��%d����%d�Ʋ�����\n",i+1,counter);
		}
}
void kechenggua()
{
	int i,j,counter=0;
	extern int Score[5][4];
	void input();
	input();
	for(j=0;j<4;j++)
		for(i=0;i<5;i++)
		{
			if(Score[i][j]<60)
				++counter;
			printf("ÿ�Ʋ�������:%d\n",counter);
		}
}
void output()
{
	int i,j;
	extern int Score[5][4];
	void input();
	input();
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			printf("%d ",Score[i][j]);
			printf("\n");
		}
}
int main()
{
	input();
	printf("\n");
	notEnough();
	printf("\n");
	kechenggua();
	printf("\n");
	output();
	return 0;
}



