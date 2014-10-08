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
	s=s+'s';//添加一个字符
	s=s+"abcd";//添加一个字符串
	s.append("1234");//添加一个字符串
	string::iterator it;//使用insert()方法把一个字符插入到迭代器位置之前
	it=s.begin();
	s.insert(it+2,'a');
	cout<<s<<endl;
	s.erase(it+3);//使用erase()方法删除迭代器所指的那个元素或一个区间中的所有元素
	cout<<s<<endl;
	s.erase(it,it+4);
	cout<<s<<endl;
	s.replace(4,1,"你大爷！");//使用replace()方法替换string对象中的字符。
	cout<<s<<endl;
	cout<<s.find("123")<<endl;
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	v.push_back("尼玛！");
	cout<<s<<endl;
	return 0;
}