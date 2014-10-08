#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	void timeChange();
	void print();
	void setTime(int h,int m,int s);
	Time():hour(0),minute(0),second(0){}
};
void Time::setTime (int h,int m,int s)
{
	hour=h;
	minute=m;
	second=s;
}
void Time:: timeChange()
{
	int h,m,s;
	cout<<"输入改后的时间:";
	cin>>h>>m>>s;
	hour=h;
	minute=m;
	second=s;
}

void Time::print()
{
	cout<<hour<<":"<<minute<<" "<<second<<endl;
} 
int main()
{
	Time t1;
	t1.setTime (3,4,5);
	t1.print();
	t1.timeChange ();
	t1.print();
	return 0;
}