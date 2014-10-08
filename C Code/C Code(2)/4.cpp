#include "stdafx.h"
#include "iostream" 
#define Max 100 
using namespace std; 

typedef struct Node 
{ char data; 
  struct Node * LChild,*RChild;}BiTNode,*BiTree; 

void CreateBiTree(BiTree * bt) 
{ 
char ch; 
ch=getchar(); 
if(ch=='.') *bt=NULL; 
else 
{ 
* bt=(BiTree)malloc(sizeof(BiTNode)); 
(* bt)->data=ch; 
CreateBiTree(&((* bt)->LChild)); 
CreateBiTree(&((* bt)->RChild)); 
} 
} 

int fullBiTree(BiTree b) 
{ //complete binary tree����ȫ������
//full����
 BiTree queue[Max],p; 
 int first=0,rear=0,bj=1,cm=1; 
 if(b!=NULL) 
 {
  rear++; 
  queue[rear]=b; 
  while(first!=rear) 
  { 
   first++; 
   p=queue[first]; 
   if(p->LChild==NULL) 
   { 
    bj=0; 
    if(p->RChild!=NULL) cm=0; 
   } 
   else 
   { 
    cm=bj; 
    rear++;queue[rear]=p->LChild; 
    if(p->RChild==NULL) bj=0; 
    else 
    { 
     rear++; 
     queue[rear]=p->RChild; 
    } 
   } 
  } 
  return cm; 
 } 
 return 1; 
} 


int main(int argc, char* argv[])
{ 
cout<<"�����������ַ�ABCO..UMJKL.EDC....."<<endl; 
BiTree b;
CreateBiTree(&b); 
int cm=fullBiTree(b); 
if(cm)cout<<"�˶�����Ϊ��ȫ������"<<endl; 
else cout<<"�˶�����������ȫ������"<<endl; 

return 0;
}��ͬ9| ����(1) 
