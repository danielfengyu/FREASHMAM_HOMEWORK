//��2����дһ���������࣬����һ��˽�����ݳ�Ա��ͨ��������Ա�������ֱ�ʹ����ɼ�1�ͼ�1�������ù��캯�����ݳ�Ա��ʼ��Ϊ0�������������������ݳ�Ա��ֵ��	
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

