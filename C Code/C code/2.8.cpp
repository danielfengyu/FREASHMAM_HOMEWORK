#include<iostream>
#include <cmath>
using namespace std;
class Circle
{
private:
	double x;
	double y;
	double r;
public:
	double disdance(Circle &p);
	void setX(double i);
	void setY(double j);
	void setR(double k);
	void compare(Circle &p,double r1,double r2);
};//别忘在此加分号
double Circle::disdance(Circle &p)
	{
		return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));
	}
void Circle:: setX(double i)
	{
		x=i;
	}
void Circle::setY(double j)
	{
		y=j;
	}
void Circle::setR(double k)
	{
		r=k;
	}
void Circle::compare(Circle &p,double r1,double r2)
	{
		if((r1+r2)>disdance(p))//此处是对函数的调用在该函数中需要有东西传给形参。
		{
			cout<<"相交"<<endl;
		}
		if((r1+r2)<disdance(p))
		{
			cout<<"相离"<<endl;
		}
		if((r1+r2)==disdance(p))
		{
			cout<<"相却"<<endl;
		}
		if(r1>r2&&(r2+disdance(p))==r1)
		{
			cout<<"R2内缺于R1"<<endl;
		}
		
		if(r2>r1&&(r1+disdance(p))==r2)
		{
			cout<<"R1内缺于R2"<<endl;
		}
		
		if(r1>r2&&(r2+disdance(p))<r1)
		{
			cout<<"R2在R1内"<<endl;
		}
		
		if(r2>(r1+disdance(p)) && (r1+disdance(p))<r2)
		{
			cout<<"R1在R2内"<<endl;
		}
	}
	int main()
	{
		Circle c1,c2;
		int a,b,c,d,e,f;
		cout<<"输入6个数:";
		cin>>a>>b>>c>>d>>e>>f;
		c1.setX(a);
		c1.setY(b);
		c1.setR(c);
		c2.setX(d);
		c2.setY(e);
		c2.setR(f);
		c1.disdance(c2);
		c1.compare(c2,c,f);
		return 0;
	}

		