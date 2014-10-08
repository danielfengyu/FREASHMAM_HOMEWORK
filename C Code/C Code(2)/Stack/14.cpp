#include<iostream>
using namespace std;
template <class T>
class Queue
{
	public:
		void Clear();
		bool EnQueue(const T item);
		bool DeQueue(T & item );
		bool IsEmpty();
		bool IsFull();
		bool GetFront(T & item);
};
template<class T>
class LinkNode
{
	public:
		T data;
		LinkNode<T>*link;
		LinkNode(const T &el,LinkNode<T>*ptr=0)
		{
			data =el;
			link=ptr;
		}
};
template<class T>
class LinkQueue:public Queue<T>
{
	private: 
		int size;//队列中的当前元素个数
	/*	int front;
		int rear;
		int *queue;*/
		LinkNode<T>*front;//表示队列的头指针
		LinkNode<T>*rear;//表示队列的尾指针
	public:
	/*	ArrayQueue(int size)
		{
			maxSize=size+1;
			queue=new T [maxSize];
			front = rear=0;
		}
		~ArrayQueue()
		{
			delete [] queue;
		}
		void Clear()
		{
			front =rear;
		}*/
		LinkQueue(int size)//构造函数，创建队列的实例
		{
			size=0;
			front=rear=NULL;
		}
		~LinkQueue()
		{
			Clear();
		}
		void Clear()
		{
			while(front!=NULL)
			{
				rear=front;
				front=front->link;
				delete rear;
			}
			rear= NULL;
			size = 0;
		}
		bool  EnQueue(const T item )//入队，插入队尾
		{
			if (rear==NULL)
			{
			front=rear=new LinkNode<T>(item , NULL);
			}
			else
			{
				rear->link = new LinkNode<T>(item, NULL);
				rear = rear->link;
			}
			size++;
			return true;
		}
		bool DeQueue()//返回队头元素，并删除该元素
		{
			LinkNode<T>*temp;
			T item;
			if ( size == 0 )
			{
				cout << "Queue is empty.";
				return false;
			}
				item= front->data;
				cout<<item;
				temp=front;	
				front=front->link;
				delete temp;
				if(front == NULL)
				{
					rear=NULL;
				}
			size--;
			return true;
		} 
		bool GetFront(T & item)//返回头元素，但不删除
		{
			
			if ( size == 0 )
			{
				cout << " Queue is empty.";
				return false;
			}
			item=front->data;
			return true;
		}

};
void main()
{
	LinkQueue<int > LQU0(0),LQU1(0),LQU2(0),LQU3(0),LQU4(0),LQU5(0),LQU6(0),LQU7(0),LQU8(0),LQU9(0);
	int num,somenumber;
	int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
	cout<<"Input the number that you want to input:";
	cin>>somenumber;
	cout<<"Input "<<somenumber<<" numbers:";
	for(int i=0;i<somenumber;i++)
	{
		cin>>num;
		if(num==0)
		{
		LQU0.EnQueue(num);
		count0++;
		}
		if(num==1)
		{
			LQU1.EnQueue (num);
			count1++;
		}	
		if(num==2)
		{
			LQU2.EnQueue (num);
			count2++;
		}	
		if(num==3)
		{
			LQU3.EnQueue (num);
			count3++;
		}
		if(num==4)
		{
			LQU4.EnQueue (num);
			count4++;
		}
		if(num==5)
		{
			LQU5.EnQueue (num);
			count5++;
		}
		if(num==6)
		{
			LQU6.EnQueue (num);
			count6++;
		}
		
		if(num==7)
		{
			LQU7.EnQueue (num);
			count7++;
		}
		if(num==8)
		{
			LQU8.EnQueue (num);
			count8++;
		}
		if(num==9)
		{
			LQU9.EnQueue (num);
			count9++;
		}
	}
		while(count0>0)
		{
			LQU0.DeQueue(); 
			count0--;
			cout<<' ';
		}
		while(count1>0)
		{
			LQU1.DeQueue(); 
			count1--;
			cout<<' ';
		}

		while(count2>0)
		{
			LQU2.DeQueue(); 
			count2--;
			cout<<' ';
		}

		while(count3>0)
		{
			LQU3.DeQueue(); 
			count3--;
			cout<<' ';
		}
		while(count4>0)
		{
			LQU4.DeQueue(); 
			count4--;
			cout<<' ';
		}

		while(count5>0)
		{
			LQU5.DeQueue(); 
			count5--;
			cout<<' ';
		}

		while(count6>0)
		{
			LQU6.DeQueue(); 
			count6--;
			cout<<' ';
		}
		while(count7>0)
		{
			LQU7.DeQueue(); 
			count7--;
			cout<<' ';
		}

		while(count8>0)
		{
			LQU8.DeQueue(); 
			count8--;
			cout<<' ';
		}
		while(count9>0)
		{
			LQU9.DeQueue(); 
			count9--;
			cout<<' ';
		}
/*	while(count2>0)
		{
			LQU2.DeQueue(); 
			count2--;
			cout<<' ';
		}
		while(count2>0)
		{
			LQU2.DeQueue(); 
			count2--;
			cout<<' ';
		}
		while(count2>0)
		{
			LQU2.DeQueue(); 
			count2--;
			cout<<' ';
		}*/
	cout<<endl;
	//LQU2.DeQueue();
	//LQU2.DeQueue ();
	
		
	

	
}