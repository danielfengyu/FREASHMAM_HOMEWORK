//完成Array 的成员函数，并编写一个主函数，在主函数中对所编写的成员函数进行测试include<iostream>
#include<iostream>
using namespace std;	
class Array
	{
	public:
		  Array();                   //所有数组元素初始化为0
		  int& getData(int i);	       //返回下标为i的数组元素的引用
		  void print();                //打印出所有数组元素的值
		  void input();                //对所有数组元素进行输入
	private:
		  int m_data[10];
	};
Array::Array ()
{
	int i;
	cout<<"初始化:"<<endl;
	for(i=0;i<10;i++)
	{
		m_data[i]=0;
	}
	for(i=0;i<10;i++)
	{
		cout<<m_data[i];
		cout<<" ";
	}
	cout<<endl;
}
int& Array::getData(int i)
{
	cout<<"output a number:"<<m_data[i];
	return m_data[i];
}
void Array::input ()
{
	int i=0;
	cout<<"input 10 numbers:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>m_data[i];

	}
}
void Array::print ()
{
	int i;
	cout<<"output 10 numbers:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<m_data[i];
		cout<<" ";
	}
	cout<<endl;
}
int main()
{
	Array num;
	num.input();
	num.print();
	num.getData(4);
	cout<<endl;
	return 0;

}