#include <stdio.h>
 #include <malloc.h>
 typedef char datatype; /*结点属性值的类型*/
 typedef struct node{ /*二叉树结点的类型*/
datatype data;
 struct node *leftchild, *rightchild;
 }BiTreeNode;
 
#define Max 100
 typedef struct
 {
 BiTreeNode* data[Max];
 int top;
 }seqstack;
 
FILE *rf ;
 
void Initiate(BiTreeNode **root) //二叉树的初始化
 {
 *root=(BiTreeNode*)malloc(sizeof(BiTreeNode));
 (*root)->leftchild=NULL;
 (*root)->rightchild=NULL;
 }
 
void Destroy(BiTreeNode **root) //释放二叉树
 {
if((*root)!=NULL &&(*root)->leftchild!=NULL)
 Destroy(&(*root)->leftchild);
 if((*root)!=NULL &&(*root)->rightchild!=NULL)
 Destroy(&(*root)->rightchild);
 free(*root);
 }
 
void createbintree(BiTreeNode **t) //创建二叉树
 {
char ch;
 

if ((ch=fgetc(rf))==' ')
 {
 *t=NULL;
 }
 else
 {
 *t=(BiTreeNode *)malloc(sizeof(BiTreeNode ));
 /*生成二叉树的根结点*/
 (*t)->data=ch;
 createbintree(&(*t)->leftchild);
 /*递归实现左子树的建立*/
createbintree(&(*t)->rightchild);
 /*递归实现右子树的建立*/
 }
 } 

void push(seqstack *s,BiTreeNode *t)/*进栈*/
 {
s->data[++s->top]=t;
 }
 
BiTreeNode* pop(seqstack *s)/*出栈*/
 {
if (s->top!=-1)
 {
 s->top--;
return(s->data[s->top+1]);
 }
 else
 return NULL;
 } 

void preorder(BiTreeNode *t)
 /*非递归实现二叉树的前序遍历*/
 {
seqstack s;
 s.top=-1;
 while ((t) || (s.top!=-1))
 /*当前处理的子树不为空或栈不为空则循环*/
 {
while (t)
 {
 printf("%c ",t->data);
 s.top++;
 s.data[s.top]=t;
 t=t->leftchild;
 }
 if (s.top>-1)
 {
 t=pop(&s);
 t=t->rightchild;
 }
 }
 }
 
void main()
 {
 BiTreeNode *t;

 rf = fopen("input.txt", "r") ;
 createbintree(&t);
 printf("非递归前续遍历的例子:");
preorder(t);
 printf("n");
 }