#include<iostream>
using namespace std;
template <class T>
class CircleQueue{
	private:
		int MaxSize;
	int *queue;
	int front,rear;
	int tag;
	public:
		CircleQueue(int size){
			MaxSize = size;
			queue=new T[MaxSize];
			front=rear=0;
			tag=0;
		}
		~CircleQueue();
		int enQueue(T x){
			if(front==rear&&tag==1){
				cout<<"queue is full!";
				return (0);
			}
			rear=(rear+1)%MaxSize;
			queue[rear]=x;
			tag=1;
			return (1);
		}
		int isEmpty(){
			return (front==rear&&tag==0);
		} 
		int deQueue(T &x){
			if(isEmpty==1){
				cout<<"queue is empty!";
				return (0);
			}
			front=(front+1)%MaxSize;
			x=data[front];
			tag=0;
			return(1);
		}
};
void main()
{
	CircleQueue<int> queue(10);
	int item;
	cout<<"input 10 numbers:";
	for(int i=0;i<10;i++)
	{
		cin>>item;
		queue.enQueue(item);
	}
}


