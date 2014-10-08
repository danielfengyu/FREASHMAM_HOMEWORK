#include <stdio.h>
 #include <malloc.h>
 typedef char datatype; /*�������ֵ������*/
 typedef struct node{ /*��������������*/
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
 
void Initiate(BiTreeNode **root) //�������ĳ�ʼ��
 {
 *root=(BiTreeNode*)malloc(sizeof(BiTreeNode));
 (*root)->leftchild=NULL;
 (*root)->rightchild=NULL;
 }
 
void Destroy(BiTreeNode **root) //�ͷŶ�����
 {
if((*root)!=NULL &&(*root)->leftchild!=NULL)
 Destroy(&(*root)->leftchild);
 if((*root)!=NULL &&(*root)->rightchild!=NULL)
 Destroy(&(*root)->rightchild);
 free(*root);
 }
 
void createbintree(BiTreeNode **t) //����������
 {
char ch;
 

if ((ch=fgetc(rf))==' ')
 {
 *t=NULL;
 }
 else
 {
 *t=(BiTreeNode *)malloc(sizeof(BiTreeNode ));
 /*���ɶ������ĸ����*/
 (*t)->data=ch;
 createbintree(&(*t)->leftchild);
 /*�ݹ�ʵ���������Ľ���*/
createbintree(&(*t)->rightchild);
 /*�ݹ�ʵ���������Ľ���*/
 }
 } 

void push(seqstack *s,BiTreeNode *t)/*��ջ*/
 {
s->data[++s->top]=t;
 }
 
BiTreeNode* pop(seqstack *s)/*��ջ*/
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
 /*�ǵݹ�ʵ�ֶ�������ǰ�����*/
 {
seqstack s;
 s.top=-1;
 while ((t) || (s.top!=-1))
 /*��ǰ�����������Ϊ�ջ�ջ��Ϊ����ѭ��*/
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
 printf("�ǵݹ�ǰ������������:");
preorder(t);
 printf("n");
 }