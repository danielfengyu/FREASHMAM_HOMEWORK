#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc,char*argv[]){
	string s;
	char ss[500];
	vector<string> v;
	scanf("%s",&ss);
	s=ss;
	s=s+'s';//���һ���ַ�
	s=s+"abcd";//���һ���ַ���
	s.append("1234");//���һ���ַ���
	string::iterator it;//ʹ��insert()������һ���ַ����뵽������λ��֮ǰ
	it=s.begin();
	s.insert(it+2,'a');
	cout<<s<<endl;
	s.erase(it+3);//ʹ��erase()����ɾ����������ָ���Ǹ�Ԫ�ػ�һ�������е�����Ԫ��
	cout<<s<<endl;
	s.erase(it,it+4);
	cout<<s<<endl;
	s.replace(4,1,"���ү��");//ʹ��replace()�����滻string�����е��ַ���
	cout<<s<<endl;
	cout<<s.find("123")<<endl;
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	v.push_back("���꣡");
	cout<<s<<endl;
	return 0;
}