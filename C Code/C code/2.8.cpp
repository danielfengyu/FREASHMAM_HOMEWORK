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
};//�����ڴ˼ӷֺ�
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
		if((r1+r2)>disdance(p))//�˴��ǶԺ����ĵ����ڸú�������Ҫ�ж��������βΡ�
		{
			cout<<"�ཻ"<<endl;
		}
		if((r1+r2)<disdance(p))
		{
			cout<<"����"<<endl;
		}
		if((r1+r2)==disdance(p))
		{
			cout<<"��ȴ"<<endl;
		}
		if(r1>r2&&(r2+disdance(p))==r1)
		{
			cout<<"R2��ȱ��R1"<<endl;
		}
		
		if(r2>r1&&(r1+disdance(p))==r2)
		{
			cout<<"R1��ȱ��R2"<<endl;
		}
		
		if(r1>r2&&(r2+disdance(p))<r1)
		{
			cout<<"R2��R1��"<<endl;
		}
		
		if(r2>(r1+disdance(p)) && (r1+disdance(p))<r2)
		{
			cout<<"R1��R2��"<<endl;
		}
	}
	int main()
	{
		Circle c1,c2;
		int a,b,c,d,e,f;
		cout<<"����6����:";
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

		