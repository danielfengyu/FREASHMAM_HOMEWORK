/*��ѭ������*/
#include<stdio.h>
#include<malloc.h>
typedef char T;
typedef struct CircleLinkNode
{
	T data;
	//struct CircleLinkNode *prior;
	struct CircleLinkNode*next;
}LinkList;
void IntiList(LinkList *&L)
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next = L;//ѭ�������Բ���дΪL->next=NULL;

}
void DestroyList(LinkList*&L)
{
	LinkList *p=L,*q=p->next;
	while(q!=L)
	{
		free(p);
		p=q;
		q=p->next;
	}
	free(p);
}
int ListEmpty(LinkList *L)
{
	return (L->next == L);
}
int ListLength(LinkList *L)
{
	LinkList *p=L;
	int i=0;
	while(p->next !=L)
	{
		i++;
		p=p->next;
	}
	return (i);
}
void DisplyList(LinkList *L)
{
	LinkList *p=L->next;
	while(p!=L)
	{
		printf("%c",p->data);
		p=p->next;
	}
	printf("\n");
}
int GetElem(LinkList *L,int i,T &e)
{
	int j=0;
	LinkList*p;
	if(L->next!=L)
	{
		if(i==1)
		{
			e=L->next->data;
			return 1;
		}
		else
		{
			p=L->next;
			while(j<i-1&&p!=L)
			{
				j++;
				p=p->next;
			}
			if(p==L)
				return 0;
			else
			{
				e=p->data;
				return 1;
			}
		}
	}
	else
		return 0;
}
int LocateElem(LinkList *L,T e)
{
		LinkList*p=L->next;
		int n=1;
		while(p!=L&& p->data!=e)
		{
			p=p->next;
			n++;
		}
		if(p==L)
			return (0);
		else
			return(n);
}
int ListInsert(LinkList*&L,int i,T e)
{
	int j=0;
	LinkList *p=L,*s;
	if(p->next == L || i ==1)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=e;
		s->next=p->next;
		p->next=s;
		return 1;
	}
	else
	{
		p=L->next;
		while(j<i-2 && p!=L)
		{
			j++;
			p=p->next;
		}
		if(p==L)
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
}
int ListDelete(LinkList *&L,int i,T &e)
{
	int j=0;
	LinkList *p=L,*q;
	if(p->next!=L)
	{
		if(i==1)
		{
			q=L->next;
			L->next=q->next;
			free(q);
			return 1;
		}
		else
		{
			p=L->next;
			while(j<i-2 && L)
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
	}
	else  
		return 0;
}
void main()
{
	LinkList *h;
	T e;
	printf("(1)��ʼ��ѭ���������h:\n");
	IntiList(h);
	printf("(2)���β���β���뷨����a,b,c,d,eԪ�أ�\n");
	ListInsert(h,1,'a');	
	ListInsert(h,2,'b');	
	ListInsert(h,3,'c');	
	ListInsert(h,4,'d');	
	ListInsert(h,5,'e');
	printf("(3)���ѭ���������h:");
	DisplyList(h);
	printf("(4)ѭ��������h����=%d\n",ListLength(h));
	printf("(5)ѭ���������hΪ%s\n",(ListEmpty(h)?"��":"�ǿ�"));
	GetElem(h,3,e);
	printf("(6)ѭ���������h�ĵ�����Ԫ��=%c\n",e);
	printf("(7)Ԫ��a��λ��=%d\n",LocateElem(h,'a'));
	printf("(8)�ڵ��ĸ�λ���ϲ���fԪ�أ�\n");
	ListInsert(h,4,'f');
	printf("(9)���ѭ���������h:");
	DisplyList(h);
	printf("(10)ɾ��h�ĵ�����Ԫ��\n");
	ListDelete(h,3,e);
	printf("(11)���ѭ���������h:");
	DisplyList(h);
	printf("\n(12)�ͷ�ѭ���������h\n");
	DestroyList(h);
}