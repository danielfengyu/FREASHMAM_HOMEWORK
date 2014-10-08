//（2）编写一个计数器类，定义一个私有数据成员，通过两个成员函数，分别使其完成加1和减1操作。用构造函数数据成员初始化为0，输出函数可以输出数据成员的值。	
#include<iostream>
using namespace std;
class Counter
{
private:
	int a;
public:
	Counter(){a=0;}
	void jia(){a++;}
	void jian(){a--;}
	void show(){cout<<"counter="<<a<<endl;}
};
int main()
{
	Counter counter;
	counter.jia();
	counter.show();
	counter.jian();
	counter.show();
	return 0;
}

