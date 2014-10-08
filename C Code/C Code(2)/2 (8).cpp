#include<stdio.h>
#include<malloc.h>
#define MaxSize 50
typedef char T;
typedef struct{
	T elem[MaxSize];
	int length;

}Sqlist;
void IntiList(Sqlist *&L)
{
	L=(Sqlist *)malloc(sizeof(Sqlist ));
	L->length=0;
}
void DestroyList(Sqlist *L)
{
	free(L);
}
int ListEmpty(Sqlist *L)
{
	return (L->length==0);
}
int ListLength(Sqlist *L)
{
	return (L->length);
}
void DisplyList(Sqlist *L)
{
	int i;
	if(ListEmpty(L))return;
	for(i=0;L->length;i++)
	{
		printf("%c",L->elem[i]);
	}
	printf("\n");
}
int GetElem(Sqlist *L,int i,T &e)
{
	if(i<1 || i>L->length)
		return 0;
	e=L->elem[i];
	return 1;
}
int LocateElem(Sqlist *L,T e)
{
	int i=0;
	while(i<L->length && L->elem[i]!=e)i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
int ListInsert(Sqlist *&L,int i,T e)
{
	int j;
	if(i<1 || i>L->length+1)
		return 0;
	i--;
	for(j=L->length;j>i;j--)
		L->elem[j]=L->elem[j-1];
	L->elem[i]=e;
	L->length++;
	return 1;
}
int ListDelete(Sqlist *&L,int i,T &e)
{
	int j;
	if(i<1 || i>L->length)
		return 0;
	i--;
	e=L->elem[i];
	for(j=i;j<L->length-1;j++)
		L->elem[j]=L->elem[j+1];
	L->length--;
	return 1;
}
void main()
{
	Sqlist *L;
	T e;
	printf("(1)初始化顺序表L:\n");
	IntiList(L);
	printf("(2)依次采用尾插入法插入a,b,c,d,e元素：\n");
	ListInsert(L,1,'a');	
	ListInsert(L,2,'b');	
	ListInsert(L,3,'c');	
	ListInsert(L,4,'d');	
	ListInsert(L,5,'e');
	printf("(3)输出顺序表L:");
	DisplyList(L);
	printf("(4)顺序表长度=%d\n",ListLength(L));
	printf("(5)顺序表L为%s\n",(ListEmpty(L)?"空":"非空"));
	GetElem(L,3,e);
	printf("(6)顺序表L的第三个元素=%c\n",e);
	printf("(7)元素a的位置=%d\n",LocateElem(L,'a'));
	printf("(8)在第四个位置上插入f元素：\n");
	ListInsert(L,4,'f');
	printf("(9)输出顺序表L:");
	DisplyList(L);
	printf("(10)删除L的第三个元素\n");
	ListDelete(L,3,e);
	printf("(11)输出顺序表L:");
	DisplyList(L);
	printf("(12)释放顺序表L\n");
	DestroyList(L);
}
