/*单循环链表*/
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
	L->next = L;//循环的所以不能写为L->next=NULL;

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
	printf("(1)初始化循环单链表表h:\n");
	IntiList(h);
	printf("(2)依次采用尾插入法插入a,b,c,d,e元素：\n");
	ListInsert(h,1,'a');	
	ListInsert(h,2,'b');	
	ListInsert(h,3,'c');	
	ListInsert(h,4,'d');	
	ListInsert(h,5,'e');
	printf("(3)输出循环单链表表h:");
	DisplyList(h);
	printf("(4)循环单链表h长度=%d\n",ListLength(h));
	printf("(5)循环单链表表h为%s\n",(ListEmpty(h)?"空":"非空"));
	GetElem(h,3,e);
	printf("(6)循环单链表表h的第三个元素=%c\n",e);
	printf("(7)元素a的位置=%d\n",LocateElem(h,'a'));
	printf("(8)在第四个位置上插入f元素：\n");
	ListInsert(h,4,'f');
	printf("(9)输出循环单链表表h:");
	DisplyList(h);
	printf("(10)删除h的第三个元素\n");
	ListDelete(h,3,e);
	printf("(11)输出循环单链表表h:");
	DisplyList(h);
	printf("\n(12)释放循环单链表表h\n");
	DestroyList(h);
}