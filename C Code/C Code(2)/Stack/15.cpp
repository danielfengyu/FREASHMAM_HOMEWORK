#include<iostream>
using namespace std;
template<class T>
class Queue
{
	public:
		void Clear();
		bool EnQueue(const T item);
		bool DeQueue(T & item);
		bool IsEmpty();
		bool IsFull();
		bool GetFront(T& item);

};
template<class T>
class LinkNode
{
	public:
		T data;
		LinkNode <T>*link;
		LinkNode(const T&el,LinkNode<T>*ptr=0)
		{
			data = el;
			link = ptr;
		}
};
template<class T>
class CircleQueue:public Queue<T>
{
	private:
		int size;
		int  tag;//插入或删除之后是否为空
		LinkNode<T>*front;
		LinkNode<T>*rear;
	public:
		CircleQueue(int size)
		{
			size=0;
			front=rear=0;
		}
		~CircleQueue()
		{
			Clear();
		}
		void Clear()
		{
			while(front!= NULL)
			{
				rear = front;
				front = front->link;
				delete rear;
			}
			rear = NULL;
			size=0;
		}
		bool EnQueue(const T item )
		{
			tag=1;
			if(rear == NULL)
			{
				front = rear= new LinkNode<T>(item,NULL);

			}
			else
			{
				rear->link = new LinkNode<T>(item,NULL);
				rear = rear->link;
			}
			size++;
			return true;
		}
		bool DeQueue(T  item)
		{
			tag=0;
			LinkNode<T>*temp;
			if(isEmpty())
			{
				cout<<"Queue is empty.";
				return false;
			}
			item= front->data;
			temp = front;
			front = front->link;
			delete temp;
			if(front== NULL)
		
			{
				rear =NULL;
			}
			size--;
			return true;
		}
		bool GetFront(T & item)
		{
			if(isEmpty())
			{
				cout<<"Queue is empty."<<endl;
				return false;
			}
			item = front->data;
			return true;
		}
		bool isEmpty(){
			return(rear==front && tag==0);
		}
		bool isFull(){
			return(rear==front && tag==1);
		}
};
void main ()
{
	CircleQueue<int>circlequ(10);
	int item;
	cout<<"input 10 numbers:";
	for(int i=0;i<10;i++)
	{
		cin>>item;
		circlequ.EnQueue(item) ;
	}
	circlequ.DeQueue(item); 
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
	circlequ.DeQueue(item);
//	circlequ.DeQueue(item);
	//circlequ.DeQueue(item);
	//circlequ.DeQueue(item);
	//circlequ.DeQueue(item);

}