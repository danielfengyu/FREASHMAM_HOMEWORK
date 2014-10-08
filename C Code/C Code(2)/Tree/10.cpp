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
		cout<<"用于动态分配的内存空间用完，退出运行！"<<endl;
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
			cout<<"用于动态分配的内存空间用完，退出运行！"<<endl;
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
Elemtype DeleteHeap(Heap &HeapBinaryTree)//从小根堆中删除堆顶元素，并返回
{
	if (HeapBinaryTree.length==0)//若堆为空，则显示出错，并退出运行
	{
		cerr<<"堆为空，退出运行！"<<endl;
		exit(1);
	}
	Elemtype temp=HeapBinaryTree.heap[0];//将堆顶元素暂存于temp中以便返回
	HeapBinaryTree.length--;//堆的元素减一，相当于删除
	if(HeapBinaryTree.length==0)//若删除后变为空对，则返回
		return temp;
	Elemtype x=HeapBinaryTree.heap[HeapBinaryTree.length];//将待调整队尾的元素暂存于x中
	int i=0;//用i指向待调整元素的位置，初始指向堆顶
	int j=1;//用j指向i的左孩子，初始指向下标1的位置
	while(j<=HeapBinaryTree.length-1){//寻找待调整元素的最终位置
		if(j<HeapBinaryTree.length-1 && HeapBinaryTree.heap[j]>HeapBinaryTree.heap[j+1])//若右孩子存在且较小，使j指向右孩子
			j++;
		if(x<=HeapBinaryTree.heap[j])//若条件成立则调整结束，退出循环
			break;
		HeapBinaryTree.heap[i]=HeapBinaryTree.heap[j];//孩子元素上移到双亲位置
		i=j;//使i和j分别指向下一层结点
		j=2*i+1;
	}
	HeapBinaryTree.heap[i]=x;//把待调整元素放到最终位置
	return temp;//返回堆顶元素
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
		x=DeleteHeap(b);//返回b的堆顶元素
		cout<<x;
		if(!EmptyHeap(b))
			cout<<',';

	}
	cout<<endl;
	ClearHeap(b);
}
