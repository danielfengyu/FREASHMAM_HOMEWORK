#include<stdio.h>
#include<malloc.h>
typedef char T;
typedef struct DoubleNode
{
	T data;
	struct DoubleNode *prior;
	struct DoubleNode *next;
}DoubleLinkList;
void IntiList(DoubleLinkList *&L)
{
	L=(DoubleLinkList*)malloc(sizeof(DoubleLinkList));
	L->prior = L->next = NULL;

}
void DestroyList(DoubleLinkList *&L)
{
	DoubleLinkList *p=L,*q=p->next;
	while(q!=NULL)
	{
		free(p);
		p=q;
		q=p->next;
	}
	free(p);
}
int ListEmpty(DoubleLinkList *L)
{
	return (L->next == NULL);
}
int ListLength(DoubleLinkList *L)
{
	DoubleLinkList *p=L;
	int i=0;
	while(p->next !=NULL)
	{
		i++;
		p=p->next;
	}
	return (i);
}
void DisplyList(DoubleLinkList *L)
{
	DoubleLinkList *p=L->next;
	while(p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
}
int GetElem(DoubleLinkList *L,int i,T &e)
{
	int j=0;
	DoubleLinkList*p=L;
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
int LocateElem(DoubleLinkList *L,T e)
{
		DoubleLinkList*p=L->next;
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
int ListInsert(DoubleLinkList *&L,int i,T e)
{
	int j=0;
	DoubleLinkList *p=L,*s;
	while(j<i-1 && p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return 0;
	else
	{
		s=(DoubleLinkList*)malloc(sizeof(DoubleLinkList));
		s->data=e;
		s->next=p->next;
		if(p->next!=NULL)p->next->prior;
		p->prior;
		p->next=s;
		return 1;
	}
}
int ListDelete(DoubleLinkList *L,int i,T &e)
{
	int j=0;
	DoubleLinkList *p=L,*q;
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
		if(q==NULL)return 0;
		p->next=q->next;
		if(p->next!=NULL)p->next->prior=p;
		free(q);
		return 1;
	}
}
void main()
{
	DoubleLinkList *h;
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