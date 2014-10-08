#include<iostream>
#include<stdlib.h>
using namespace std;
typedef int Elemtype;
struct Heap{
	Elemtype *heap;
	int length;
	int MaxSize;
};
void InitHeap(Heap& HeapBinaryTree){
	HeapBinaryTree.MaxSize=10;
	HeapBinaryTree.heap=new Elemtype[HeapBinaryTree.MaxSize];
	if(!HeapBinaryTree.heap){
		cout<<"���ڶ�̬������ڴ�ռ����꣬�˳����У�"<<endl;
		exit(1);

	}
	HeapBinaryTree.length=0;
}
void ClearHeap(Heap & HeapBinaryTree){
	if(HeapBinaryTree.heap!=NULL){
		delete []HeapBinaryTree.heap;
		HeapBinaryTree.heap=NULL;
		HeapBinaryTree.length=0;
		HeapBinaryTree.MaxSize=0;
	}
}
bool EmptyHeap(Heap&HeapBinaryTree){
	return HeapBinaryTree.length==0;
}
void InsertHeap(Heap&HeapBinaryTree,Elemtype item){
	if(HeapBinaryTree.length==HeapBinaryTree.MaxSize)
	{
		int k=sizeof(Elemtype);
		HeapBinaryTree.heap=(Elemtype*)realloc(HeapBinaryTree.heap,2*HeapBinaryTree.MaxSize*k);
		if(HeapBinaryTree.heap==NULL){
			cout<<"���ڶ�̬������ڴ�ռ����꣬�˳����У�"<<endl;
		exit(1);
		}
		HeapBinaryTree.MaxSize=2*HeapBinaryTree.MaxSize;
	}

	int i=HeapBinaryTree.length;
	while(i!=0){
		int j=(i-1)/2;
		if(item>=HeapBinaryTree.heap[j])
			break;
		HeapBinaryTree.heap[i]=HeapBinaryTree.heap[j];
		i=j;
	}
	HeapBinaryTree.heap[i]=item;
	HeapBinaryTree.length++;
}
Elemtype DeleteHeap(Heap &HeapBinaryTree)//��С������ɾ���Ѷ�Ԫ�أ�������
{
	if (HeapBinaryTree.length==0)//����Ϊ�գ�����ʾ�������˳�����
	{
		cerr<<"��Ϊ�գ��˳����У�"<<endl;
		exit(1);
	}
	Elemtype temp=HeapBinaryTree.heap[0];//���Ѷ�Ԫ���ݴ���temp���Ա㷵��
	HeapBinaryTree.length--;//�ѵ�Ԫ�ؼ�һ���൱��ɾ��
	if(HeapBinaryTree.length==0)//��ɾ�����Ϊ�նԣ��򷵻�
		return temp;
	Elemtype x=HeapBinaryTree.heap[HeapBinaryTree.length];//����������β��Ԫ���ݴ���x��
	int i=0;//��iָ�������Ԫ�ص�λ�ã���ʼָ��Ѷ�
	int j=1;//��jָ��i�����ӣ���ʼָ���±�1��λ��
	while(j<=HeapBinaryTree.length-1){//Ѱ�Ҵ�����Ԫ�ص�����λ��
		if(j<HeapBinaryTree.length-1 && HeapBinaryTree.heap[j]>HeapBinaryTree.heap[j+1])//���Һ��Ӵ����ҽ�С��ʹjָ���Һ���
			j++;
		if(x<=HeapBinaryTree.heap[j])//����������������������˳�ѭ��
			break;
		HeapBinaryTree.heap[i]=HeapBinaryTree.heap[j];//����Ԫ�����Ƶ�˫��λ��
		i=j;//ʹi��j�ֱ�ָ����һ����
		j=2*i+1;
	}
	HeapBinaryTree.heap[i]=x;//�Ѵ�����Ԫ�طŵ�����λ��
	return temp;//���ضѶ�Ԫ��
}

void main()
{
	int a[8],num;
	cout<<"input 8 numbers:";
	for(int k=0;k<8;k++)
	{
		cin>>num;
		a[k]=num;
	}
	Heap b;
	InitHeap(b);
	int i=0,x;
	for(i=0;i<8;i++)
	    InsertHeap(b,a[i]);
	for(i=0;i<7;i++)
		cout<<b.heap[i]<<',';
	cout<<b.heap[7]<<endl;
	cout<<"the order of deleting:"<<endl;
	while(!EmptyHeap(b)){
		x=DeleteHeap(b);//����b�ĶѶ�Ԫ��
		cout<<x;
		if(!EmptyHeap(b))
			cout<<',';

	}
	cout<<endl;
	ClearHeap(b);
}
