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
	printf("(1)��ʼ��˳���h:\n");
	IntiList(h);
	printf("(2)���β���β���뷨����a,b,c,d,eԪ�أ�\n");
	ListInsert(h,1,'a');	
	ListInsert(h,2,'b');	
	ListInsert(h,3,'c');	
	ListInsert(h,4,'d');	
	ListInsert(h,5,'e');
	printf("(3)���˳���h:");
	DisplyList(h);
	printf("(4)˳�����=%d\n",ListLength(h));
	printf("(5)˳���hΪ%s\n",(ListEmpty(h)?"��":"�ǿ�"));
	GetElem(h,3,e);
	printf("(6)˳���h�ĵ�����Ԫ��=%c\n",e);
	printf("(7)Ԫ��a��λ��=%d\n",LocateElem(h,'a'));
	printf("(8)�ڵ��ĸ�λ���ϲ���fԪ�أ�\n");
	ListInsert(h,4,'f');
	printf("(9)���˳���h:");
	DisplyList(h);
	printf("(10)ɾ��h�ĵ�����Ԫ��\n");
	ListDelete(h,3,e);
	printf("(11)���˳���h:");
	DisplyList(h);
	printf("\n(12)�ͷ�˳���h\n");
	DestroyList(h);
}