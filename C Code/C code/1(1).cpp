
/*（2） 描述有理数的Rational类如下，请补充类的其他成员使其能够执行各种运算。
	Class Rational
	{
	   long  numerator ;  // 分子
	   long  denominator ; // 分母
	........
	};
	1）重载算术运算符“＋”、“-”、“*”、“/”，使之能够适用于有理数的四则运算。
	2）重载比较运算符“>”、“ <=” 和“==”，使之能够比较两个有理数。
	3）重载运算符“<<”，使其能以规范的方式输出分数，如1/2，-1/3，分母不能为0。*/
#include<iostream>
using namespace std;
class Rational
{
private:
	long numerator;
	long denominator;
	Rational operator+(const Rational&a);
//	Rational operator-(const Rational&a);
//	Rational operator/(const Rational&a);
	Rational(long numerator,long denominator):numerator(0),denominator(0)
	{
		cout<<numerator<<"/"<<denominator<<endl; 
	}
	void print()
	{
		cout<<numerator<<"/"<<denominator<<endl; 	
	}
};	
Rational Rational:: operator+(const Rational&a)
{
	Rational num;
	num.denominator =denominator*a.denominator;
	num.numerator =denominator*a.numerator +a.denominator*numerator;
	return num;
//	Rational operator-(const Rational&a);
//	Rational operator*(const Rational&a);
//	Rational operator/(const Rational&a);
void main()
{
	Rational a(1,3),b(1,4);
	(a+b).print ();
}

