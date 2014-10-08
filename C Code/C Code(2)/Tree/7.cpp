#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define MaxSize 100
typedef char ElemType;
typedef struct node
{
	ElemType data;
	struct node*leftchild;
		struct node*rightchild;

}BinaryTreeNode;
void CreateBinaryTreeNode(BinaryTreeNode*&b,char *str)
{
	BinaryTreeNode*St[MaxSize],*p=NULL;
	int top=-1,k,j=0;
	char ch;
	b=NULL;
	ch=str[j];
	while(ch!='\0')
	{
		switch(ch)
		{
		case '(':top++;St[top]=p;k=1;break;
		case ')':top--;break;
		case ',':k=2;break;
		default:
			p=(BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
			p->data=ch;
			p->leftchild=p->rightchild=NULL;
			if(b==NULL)
				b=p;
			else
			{
				switch(k)
				{
				case 1:St[top]->leftchild=p;break;
				case 2:St[top]->rightchild=p;break;
				}
			}
		}
		j++;
		ch=str[j];
	}
}
BinaryTreeNode *FindeNode(BinaryTreeNode*b,ElemType x)
{
	BinaryTreeNode*p;
	if(b==NULL)
		return NULL;
	else if(b->data==x)
		return b;
	else
	{
		p=FindeNode(b->leftchild,x);
		if(p!=NULL)
			return p;
		else
			return FindeNode(b->rightchild,x);
	}
}
BinaryTreeNode*LeftchildNode(BinaryTreeNode*p)
{
	return p->leftchild;
}
BinaryTreeNode*RightchildNode(BinaryTreeNode*p)
{
	return p->rightchild;
}
int BinaryTreeDepth(BinaryTreeNode*b)
{
	int leftchilddepth,rightchilddepth;
	if(b==NULL)
		return 0;
	else
	{
		rightchilddepth=BinaryTreeDepth(b->leftchild);
		leftchilddepth=BinaryTreeDepth(b->rightchild);
		return (leftchilddepth>rightchilddepth)?(leftchilddepth+1):(rightchilddepth+1);
	}
}
void DisplayBinaryTreeNode(BinaryTreeNode*b)
{
	if(b!=NULL)
		{
			printf("%c",b->data);
			if(b->leftchild!=NULL)
			{
				printf("(");
				DisplayBinaryTreeNode(b->leftchild);
				printf(")");
			}
			if(b->rightchild!=NULL)
			{
				printf(",");
				DisplayBinaryTreeNode(b->rightchild);
				printf(")");
			}
		}
}
int BinaryTreeNodeWidth(BinaryTreeNode*b)
{
	struct
	{
		int lno;
		BinaryTreeNode*p;
	}queue[MaxSize];
	int front,rear;
	int lnum,max,i,n;
	front=rear=0;
	if(b!=NULL)
	{
		rear++;
		queue[rear].p=b;
		queue[rear].lno=1;
		while(rear!=front)
		{
			front++;
			b=queue[front].p;
			lnum=queue[front].lno;
			if(b->leftchild!=NULL)
			{
				rear++;
				queue[rear].p=b->leftchild;
				queue[rear].lno=lnum+1;
			}
			if(b->rightchild!=NULL)
			{
				rear++;
				queue[rear].p=b->rightchild;
				queue[rear].lno=lnum+1;
			}	
		}
		max=0;
		lnum=1;
		i=1;
		while(i<=rear)
		{
			n=0;
			while(i<=rear&&queue[i].lno==lnum)
			{
				n++;
				i++;
			}
			lnum=queue[i].lno;
			if(n>max)
				max=n;
		}
		return max;
	}
		else
			return 0;

}
int Nodes(BinaryTreeNode*b)
{
	int num1,num2;
	if(b==NULL)
		return 0;
	else if (b->leftchild==NULL&&b->rightchild==NULL)
		return 1;
	else
	{
		num1=Nodes(b->leftchild);
		num2=Nodes(b->rightchild);
		return (num1+num2+1);
	}
}
int LeafNodes(BinaryTreeNode*b)
{
	int num1,num2;
	if(b==NULL)
		return 0;
	else if (b->leftchild==NULL&&b->rightchild==NULL)
		return 1;	
	else
	{
		num1=LeafNodes(b->leftchild);
		num2=LeafNodes(b->rightchild);
		return (num1+num2);
	}
}
void preOrder1(BinaryTreeNode*b)
{
	if(b!=NULL)
	{
		printf("%c  ",b-> data);
		preOrder1(b->leftchild );
		preOrder1(b->rightchild );
	}
}
void inOrder1(BinaryTreeNode*b)
{
	if(b!=NULL)
	{
	
		inOrder1(b->leftchild );	
		printf("%c  ",b-> data);
		inOrder1(b->rightchild );
	}
}
void postOrder1(BinaryTreeNode*b)
{
	if(b!=NULL)
	{
	
		postOrder1(b->leftchild );
		postOrder1(b->rightchild );
		printf("%c  ",b-> data);
	}
}
int BinaryTreeNoneLeafNodecount(BinaryTreeNode*b)
{
	if(b==NULL)
		return 0;
	else if(b->leftchild ==NULL && b->rightchild ==NULL)
		return 0;
	else
		return(BinaryTreeNoneLeafNodecount(b->leftchild )+BinaryTreeNoneLeafNodecount(b->rightchild )+1);
}
void AllPath(BinaryTreeNode*b)
{
	struct snode
	{
		BinaryTreeNode *node;
		int parent;

	}queue[MaxSize];
	int front,rear,p;
	front =rear = -1;
	rear++;
	queue[rear].node=b;
	queue[rear].parent= -1;
	while(front < rear)
	{
		front ++;
		b=queue[front].node;
		if(b->leftchild == NULL&& b->rightchild == NULL)
		{
			printf("%c到根节点路径：",b->data);
			p=front;
			while(queue[p].parent!=-1)
			{
				printf("%c",queue[p].node->data);
				p=queue[p].parent;
			}
			printf("%c\n",queue[p].node->data);

		}
		if(b->leftchild!=NULL)
		{
			rear++;
			queue[rear].node=b->leftchild;
			queue[rear].parent=front;
		}
		if(b->rightchild!=NULL)
		{
			rear++;
			queue[rear].node=b->rightchild;
			queue[rear].parent=front;
		}
	}
}
void AllTreePath(BinaryTreeNode*b,ElemType path[],int pathlength )
{
	int i;
	if(b!=NULL)
	{
		if(b->leftchild==NULL && b->rightchild == NULL)
		{
			printf("%c到根结点的路径：%c",b->data,b->data);
			for(i=pathlength-1;i>=0;i--)
			{
				printf("%c",path[i]);
			}
				printf("\n");
		}
			else
			{
				path[pathlength]=b->data;
				pathlength++;
				AllTreePath(b->leftchild,path,pathlength);				
				AllTreePath(b->rightchild,path,pathlength);
				pathlength--;
			}
	}
}
void LongPath(BinaryTreeNode*b,ElemType path[],int pathlength,ElemType longpath[],int &longpathlength)
{
	int i;
	if(b==NULL)
	{
		if(pathlength>longpathlength)
		{
			for(i=pathlength-1;i>=0;i--)
			{
				longpath[i]=path[i];
			}
			longpathlength=pathlength;
		}
	}
	else
	{
		path[pathlength]=b->data;
		pathlength++;
		LongPath(b->leftchild,path,pathlength,longpath,longpathlength);	
		LongPath(b->rightchild,path,pathlength,longpath,longpathlength);
		pathlength--;
	}
}
void DisplayLeaf(BinaryTreeNode*b)
{
	if(b!=NULL)
	{
		if(b->leftchild==NULL && b->rightchild==NULL)
		{
			printf("%c",b->data);

		}
		else
		{
			DisplayLeaf(b->leftchild);
			DisplayLeaf(b->rightchild);
		}
	}
}
bool isCompleteBinaryTree(BinaryTreeNode*b)
{
	int rear,front;
	BinaryTreeNode*p,*queue[MaxSize];
	front=rear=-1;
	bool CM=1;
	if(b!=NULL)
	{
		queue[++rear]=b;
		do
		{
			p=queue[++front];//out queue
			if(!CM &&p)
				return 0;
			if(p==NULL)
			{
				CM=0;
			}
			else
			{
			if(p->leftchild!=NULL )
				queue[++rear]=p->leftchild;
			else
				queue[++rear]=NULL;
			if(p->rightchild !=NULL)
				queue[++rear]=p->rightchild;
			else
				queue[++rear]=NULL;
			
			}
			
		}while(front!=rear);
	}
	return 1;
	
}
void Exchange(BinaryTreeNode*b)
{
	BinaryTreeNode*p;
	if(b!=NULL)
	{
		Exchange(b->leftchild );
		Exchange(b->rightchild );
		p=b->leftchild ;
		b->leftchild=b->rightchild ;
		b->rightchild=p;
	}

}
int OneChild(BinaryTreeNode*b)
{
	int count=0;
	if(b!=NULL)
	{
	
		if(b->leftchild ==NULL&&b->rightchild!=NULL)
		{
			count++;
		OneChild(b->leftchild);
		}
		else if(b->leftchild !=NULL&&b->rightchild ==NULL)
		{
			count++;
		    OneChild(b->rightchild );
		}
	}
	return count;
}
/*void DeleteBinaryTreeNode(BinaryTreeNode*b,char c)
{
	if(b!=NULL)
	{
		if(b->data ==c)
		free(b);
}
BinaryTreeNode*Parent(BinaryTreeNode*b,char x)
{
	BinaryTreeNode*p=NULL;
	if(b!=NULL)
	{
		if(b->data ==x)
		{
			
			return p;
		}

		else
		{
			p=b;
			Parent(b->leftchild ,x);
			Parent(b->rightchild ,x);
		}
	}
}*/
void main()
{
	BinaryTreeNode*b,*p,*lp,*rp;
	ElemType path[MaxSize],longpath[MaxSize];
	char ch,c;
	int count=0;
	int i,longpathlength=0;
	CreateBinaryTreeNode(b,"A(B(D(H,),E(I,)),C(F,G))");
	printf("输出二叉树：");
	DisplayBinaryTreeNode(b);
	printf("\n");
	printf("前序遍历：");
	preOrder1(b);
	printf("\n");
	printf("中序遍历：");
	inOrder1(b);
	printf("\n");
	printf("后序遍历：");
	postOrder1(b);
	printf("\n");
	printf("叶子结点的个数：");
	printf("%d",LeafNodes(b));
	printf("\n");
	printf("所有结点的个数：");
	printf("%d",Nodes(b));
	printf("\n");
	printf("非叶子结点的个数：");
	printf("%d",BinaryTreeNoneLeafNodecount(b));
	printf("\n");
	printf("树的深度：");
	printf("%d",BinaryTreeDepth(b));
	printf("\n");
	printf("树的宽度：");
	printf("%d",BinaryTreeNodeWidth(b));
	printf("\n");
	printf("输入一个要查找的结点：");
	scanf("%c",&ch);
	p=FindeNode(b,ch);
	if(p!=NULL)
	{
		lp=LeftchildNode(p);
		if(lp!=NULL)
			printf("左孩子为%c\n",lp->data );
		else
			printf("无做孩子\n");
		rp=RightchildNode(p);
		if(rp!=NULL)
			printf("右孩子为%c\n",rp->data );
		else
			printf("无右孩子\n");
	}
	printf("\n");
	printf("二叉树的叶子结点：");
	DisplayLeaf(b);
	printf("\n\n");
	printf("二叉树的所有的路径：\n");
	AllPath(b);
	printf("\n");
	LongPath(b,path,0,longpath,longpathlength);
	printf("最长路径长度：%d\n",longpathlength);
	printf("最长路径是：");
	for(i=longpathlength-1;i>=0;i--)
		printf("%c",longpath[i]);
	printf("\n");
	if(isCompleteBinaryTree(b))
		printf("完全二叉树！");
	else
		printf("非完全二叉树！");
	printf("\n");
	Exchange(b);	
	printf("输出change二叉树：");
	DisplayBinaryTreeNode(b);
	printf("\n");
	printf("度为一的结点个数:%d",OneChild(b));
	printf("\n");
//	c=Parent(b,'B')->data;
}
