
/*��2�� ������������Rational�����£��벹�����������Աʹ���ܹ�ִ�и������㡣
	Class Rational
	{
	   long  numerator ;  // ����
	   long  denominator ; // ��ĸ
	........
	};
	1�������������������������-������*������/����ʹ֮�ܹ����������������������㡣
	2�����رȽ��������>������ <=�� �͡�==����ʹ֮�ܹ��Ƚ�������������
	3�������������<<����ʹ�����Թ淶�ķ�ʽ�����������1/2��-1/3����ĸ����Ϊ0��*/
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

