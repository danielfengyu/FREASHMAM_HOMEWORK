/*��1����������ƽ�����Point�����ؼ������������������ľ��룬
�ֱ��ó�Ա��������Ԫ����ʵ�֡����������<<����������[x,y]���������Լ���غ����Ķ��塣*/
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
	   Point( int a= 0, int b = 0 ):x(a),y(b) {  }     //���캯��
        void setPoint( int a, int b ) { x = a ;  y = b ; }
		double operator -(Point &p)
		{
			return sqrt((p.x -x)*(p.x-x)+(p.y-y)*(p.y -y) );
		} 
		friend ostream& operator <<(ostream&out,const Point&p)
		{
			out<<"["<<p.x<<","<<p.y <<"]"<<endl;
			return out;
		}
	/*	friend double operator-(Point &p1,Point &p2)
		{
			return sqrt((p1.x -p2.x )*(p1.x -p2.x )+(p1.y -p2.y )*(p1.y -p2.y));
		}*/
       
  private:
        int x, y;	// ƽ������
};
int main()
{
  Point p1(2,1),p2;
	double d = p1-p2;   //�����������
	cout<<p1<<"-"<< p2<< " = "<<d<<endl;  // ��� [2,1]  [0,0] = 2.23
  return 0;
}