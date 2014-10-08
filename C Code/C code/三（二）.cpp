#include<iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	void change();
	void print();
	Date(int d,int mon,int y):day(d),month(mon),year(y){}
	Date(int d,int mon):day(d),month(mon){year=0;}
};
void Date::change ()
{
	day=day++;
	month=month--;
	year=year++;
}
void Date::print()
{
	cout<<year<<"Äê"<<month<<"ÔÂ"<<day<<"ÈÕ"<<endl;
} 
int main()
{
	Date date1(1,2,1992);
	Date date2(1,2);
	date1.change();
	date1.print();
	date2.print();
	return 0;
}

