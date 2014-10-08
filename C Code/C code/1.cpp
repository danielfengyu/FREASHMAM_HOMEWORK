/*（1）定义描述平面点类Point，重载减号运算符计算两个点的距离，
分别用成员函数与友元函数实现。重载运算符<<输出点的坐标[x,y]，给出类以及相关函数的定义。*/
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
	   Point( int a= 0, int b = 0 ):x(a),y(b) {  }     //构造函数
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
        int x, y;	// 平面坐标
};
int main()
{
  Point p1(2,1),p2;
	double d = p1-p2;   //计算两点距离
	cout<<p1<<"-"<< p2<< " = "<<d<<endl;  // 输出 [2,1]  [0,0] = 2.23
  return 0;
}