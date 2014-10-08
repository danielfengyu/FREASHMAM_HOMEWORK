#include<stdio.h>
int main()
{
	int i,j;
	float score[10][3];
	float scoreTotal[10];
	float total(float(*p)[3]);
	printf("输入每个同学的各科成绩:");
	for(i=0;i<10;i++)
	{
		for(j=0;j<3;j++)
			scanf("%f",&score[i][j]);
		printf("\n");
	}
	for(i=0;i<10;i++)
		scoreTotal[i]=total(score+i);
	for(i=0;i<10;i++)
	printf("%0.2f\t",scoreTotal[i]);
		return 0;
}
float total(float(*p)[3])
{
	int i;
	float total=0;
	for(i=0;i<3;i++)
		total+=*(*p+i);
	return total;
}
