#include<stdio.h>
#include<malloc.h>
typedef char T;
typedef struct ListNode
{
	T data;
	struct ListNode *next;

}LinkList;
void IntiList(LinkList *&L)
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;

}
void DestroyList(LinkList *&L)
{
	LinkList *p=L,*q=p->next;
	while(q!=NULL)
	{
		free(p);
		p=q;
		q=p->next;
	}
	free(p);
}
int ListEmpty(LinkList *L)
{
	return (L->next == NULL);
}
int ListLength(LinkList *L)
{
	LinkList *p=L;
	int i=0;
	while(p->next !=NULL)
	{
		i++;
		p=p->next;
	}
	return (i);
}
void DisplyList(LinkList *L)
{
	LinkList *p=L->next;
	while(p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
}
int GetElem(LinkList *L,int i,T &e)
{
	int j=0;
	LinkList*p=L;
	while(j<i&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return 0;
	else
	{
		e=p->data;
		return 1;
	}
}
int LocateElem(LinkList *L,T e)
{
		LinkList*p=L->next;
		int n=1;
		while(p!=NULL&& p->data!=e)
		{
			p=p->next;
			n++;
		}
		if(p==NULL)
			return (0);
		else
			return(n);
}
int ListInsert(LinkList *&L,int i,T e)
{
	int j=0;
	LinkList *p=L,*s;
	while(j<i-1 && p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return 0;
	else
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=e;
		s->next=p->next;
		p->next=s;
		return 1;
	}
}
int ListDelete(LinkList *L,int i,T &e)
{
	int j=0;
	LinkList *p=L,*q;
	while(j<i-1 && p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return 0;
	else
	{
		q=p->next;
		p->next=q->next;
		free(q);
		return 1;
	}
}
void main()
{
	LinkList *h;
	T e;
	printf("(1)初始化顺序表h:\n");
	IntiList(h);
	printf("(2)依次采用尾插入法插入a,b,c,d,e元素：\n");
	ListInsert(h,1,'a');	
	ListInsert(h,2,'b');	
	ListInsert(h,3,'c');	
	ListInsert(h,4,'d');	
	ListInsert(h,5,'e');
	printf("(3)输出顺序表h:");
	DisplyList(h);
	printf("(4)顺序表长度=%d\n",ListLength(h));
	printf("(5)顺序表h为%s\n",(ListEmpty(h)?"空":"非空"));
	GetElem(h,3,e);
	printf("(6)顺序表h的第三个元素=%c\n",e);
	printf("(7)元素a的位置=%d\n",LocateElem(h,'a'));
	printf("(8)在第四个位置上插入f元素：\n");
	ListInsert(h,4,'f');
	printf("(9)输出顺序表h:");
	DisplyList(h);
	printf("(10)删除h的第三个元素\n");
	ListDelete(h,3,e);
	printf("(11)输出顺序表h:");
	DisplyList(h);
	printf("\n(12)释放顺序表h\n");
	DestroyList(h);
}