#include<stdio.h>
int main()
{
	int num;
	void changeNum(int num);
	printf("����һ����:\n");
	scanf("%d",&num);
	changeNum( num);
	printf("\n");
	return 0;
}
void changeNum(int x)
{	
	
	if(x>1)
	{
	changeNum(x/2);
	printf("%d",x%2);
	}
	else 
	printf("1");
}



