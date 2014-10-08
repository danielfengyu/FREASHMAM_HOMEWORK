#include<stdio.h>
int Score[5][4];
void input()
{
	int i,j;
	extern int Score[5][4];
	printf("输入一个数组:");
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
			printf("第%d号有%d科不及格\n",i+1,counter);
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
			printf("每科不及格数:%d\n",counter);
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



