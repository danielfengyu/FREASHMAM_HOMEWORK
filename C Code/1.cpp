#include<stdio.h>
int main()
{
	int *ip;
	int a=1,c;
	int b[3]={1,2,3};
	ip=&a;
	*ip=17;
	ip=&b[1];
	ip=ip+1;
	c=*ip;
	printf("%d\n",c);
	return 0;
}