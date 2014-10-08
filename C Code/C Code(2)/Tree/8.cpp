#include <iostream>
#include<string.h>
#include<stack> 
using namespace std;
 
typedef struct node
{
	char data;
	struct node *leftchild,*rightchild;
}BinarySearchTree;
 
typedef struct node1
{
	BinarySearchTree *binaryttreenode;
	bool isFirst;//标记
}BinarySearchTreeNode;
 
 
void creatBinarySearchTree(char *s,BinarySearchTree *&root) //创建二叉树，s为形如A(B,C(D,E))形式的字符串 
{
	int i;
	bool isRight=false;
	stack<BinarySearchTree*> s1; //存放结点 
	stack<char> s2; //存放分隔符
	BinarySearchTree *p,*temp;
	root->data=s[0];
	root->leftchild=NULL;
	root->rightchild=NULL;
	s1.push(root);
	i=1;
	while(i<strlen(s))
	{
		if(s[i]=='(')
		{
			s2.push(s[i]);
			isRight=false;
		} 
		else if(s[i]==',') 
		{
			isRight=true;
		}
		else if(s[i]==')')
		{
			s1.pop();
			s2.pop();
		}
		else if(isalpha(s[i]))
		{
			p=(BinarySearchTree *)malloc(sizeof(BinarySearchTree));
			p->data=s[i];
			p->leftchild=NULL;
			p->rightchild=NULL;
			temp=s1.top();
			if(isRight==true) 
			{
				temp->rightchild=p;
				cout<<temp->data<<"的右孩子是"<<s[i]<<endl;
			}
			 else
			{
				temp->leftchild=p;
				cout<<temp->data<<"的左孩子是"<<s[i]<<endl;
			}
			if(s[i+1]=='(')
			s1.push(p);
		}
		i++;
	} 
}
 BinarySearchTree*Search(BinarySearchTree*root,char key)
 {
	 BinarySearchTree *current=root;
	 while((NULL!=root)&&(key!=current->data))
	 {
		 current=(key<current->data?Search(current->leftchild,key):Search(current->rightchild,key));

	 }
	 return current;
 }
void display(BinarySearchTree *root) //显示树形结构 
{
		if(root!=NULL)
		{
			cout<<root->data;
			if(root->leftchild!=NULL)
			{
				cout<<'(';
				display(root->leftchild);
			}
			if(root->rightchild!=NULL)
			{
				cout<<',';
				display(root->rightchild);
				cout<<')';
			}
		}
}

void main()
{
	char s[100];
	char ch;
	while(scanf("%s",s)==1)
	{
		cout<<"创建一棵树："<<endl;
		BinarySearchTree *root=(BinarySearchTree *)malloc(sizeof(BinarySearchTree));
		
		creatBinarySearchTree(s,root);
		cout<<"显示一棵树：";
		display(root);
		cout<<endl;
		cout<<"输入一个要查找的结点：";
		cin>>ch;
		cout<<Search(root,ch)->data ;
	}
}