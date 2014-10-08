#include<iostream>
#define N 5
#include<malloc.h>
using namespace std;
struct Node{
	node*pre;
	node*next;
	int a[N];
}node;
void CreateNode()
{
	int n;
	for(int i=0;i<N;i++)
	{
		cin>>n;
		a[i]=n;
	}4
	pre=a;
	next=a[N];

}
void CreateList(node *&b)
{
	b=(node*)malloc(sizeof(node));
	b->pre=b-next=b;
}
void main()
{

}