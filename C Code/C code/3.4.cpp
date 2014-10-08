#include<iostream>
using namespace std;
class  Carlo
{
private:
	double value,weight;
public:
	Carlo (double v=0.0,double m=0.0);
	~Carlo();
	void input (Carlo&c);
	void output();
	static double sum_value;
	static double sum_weight;
};
Carlo::Carlo(double v,double m):value(v),weight(m){}
Carlo::~Carlo ()
{
	sum_value=sum_value-value;
	sum_weight=sum_weight-weight;
}
double Carlo::sum_value =100;
double Carlo::sum_weight =211;
void Carlo:: input(Carlo &c)
{
	cout<<"The value after bringing in:"<<c.value +sum_value<<endl;
	cout<<"The weight after bring in:"<<c.weight +sum_weight<<endl;
}
void Carlo::output()
{
	cout<<"The value after selling out:"<<sum_value<<endl<<"The weight after selling out :"<<sum_weight<<endl;
}
int main()
{
	double a,b;
	cout<<"输入一袋的价钱和重量:";
	cin>>a>>b;
	Carlo c1(a,b);
	Carlo c2=c1;
	c1.input(c1);
	c2.~Carlo ();
	c2.output ();
	return 0;
}

