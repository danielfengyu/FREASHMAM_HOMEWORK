//���Array �ĳ�Ա����������дһ�������������������ж�����д�ĳ�Ա�������в���include<iostream>
#include<iostream>
using namespace std;	
class Array
	{
	public:
		  Array();                   //��������Ԫ�س�ʼ��Ϊ0
		  int& getData(int i);	       //�����±�Ϊi������Ԫ�ص�����
		  void print();                //��ӡ����������Ԫ�ص�ֵ
		  void input();                //����������Ԫ�ؽ�������
	private:
		  int m_data[10];
	};
Array::Array ()
{
	int i;
	cout<<"��ʼ��:"<<endl;
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