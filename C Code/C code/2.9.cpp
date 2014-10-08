//定义类Point.要求定义类对象时，可以有这样的定义语句：
 //Point p1(1,2),p2(p1);
#include<iostream>
using namespace std;
class Point 	
	{ 
	public:
   		Point (int a, int b)
	{
	 x=a;y=b;
	}
	void fun (Point &p);
	void fun (Point * p);
 	private:
 		int x,y;
	}; 

	void Point:: fun (Point &p)
	{
	x=p.x ;
	y=p.y ;
	cout<< "The fun(Point &p) :"<<endl;
	cout<<"("<<x<<","<<y<<")"<<endl;
	}
	void Point:: fun (Point *p)
	{
	x=p->x ;
 		y=p->y ;
	cout<< "Fun (Point *p) :"<<endl;
	cout<<"("<<x<<","<<y<<")"<<endl;
	}

	void main()
	{
	Point p(1,2),q(3,4) ;
	p.fun(p) ;
	p.fun(&q) ;
	}