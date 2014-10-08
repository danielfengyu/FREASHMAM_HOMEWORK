#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i=1,j=0,f;
	void elect();
	while(i<=10)
	{
	
		++j;
	 elect();
	 ++i;
	}
	f=j*10;
	printf("×Ü·ÖÎª:%d",f);
	return 0;
}
void elect()
{
	int n,m,p,f;
	int rand();
	srand(time(0));
	n=rand()%4+1;
	switch(n)
	{
	case 1:
		m=rand()%10+1;
		p=rand()%10+1;
		printf("%d+%d= ",m,n);
		scanf("%d",&f);
		if(f=m+p)
		{
			printf("Right!");
		}
		else
			printf("Not right!");
		printf("\n");break;
	case 2:
		m=rand()%10+1;
		p=rand()%10+1;
		printf("%d-%d=",m,p);
		scanf("%d",&f);
		if(f=m-p)
		{
			printf("Right!");
		}
		else
			printf("Not right!");	
		printf("\n");break;
	case 3:
		
		m=rand()%10+1;
		p=rand()%10+1;
		printf("%dx%d=",m,p);
		scanf("%d",&f);
		if(f=m*p)
		{
			printf("Right!");
		}
		else
			printf("Not right!");	
		printf("\n");break;
	case 4:

		m=rand()%10+1;
		p=rand()%10+1;
		printf("%d/%d=",m,p);
		scanf("%d",&f);
		if(f=m/p)
		{
			printf("Right!");
		}
		else
			printf("Not right!");
		printf("\n");break;
	}
	
}

                                          