#include<iostream.h>
#include<stdlib.h>
typedef int T;
struct List{
	T* list;
	int size;
	int MaxSize;
};
void InitList(List& L)
{
	L.MaxSize =10;
	L. list=new T[L.MaxSize ];
	if(L.list == NULL)
	{
		cout<<"No Place ,Please exit!"<<endl;
		exit(1);
	}
	L.size =0;
}
void ClearList(List &L)
{
	if(L.list !=NULL)
	{
		delete[]L.list ;
		L.list = NULL;
	}
	L.MaxSize =0;
	L.size =0;
}
int LengthList(List &L)
{
	return L.size ;
}
bool EmptyList(List &L)
{
	return L.size =0;
}
T GetList(List &L,int pos)
{
	if(pos<1 || pos>L.size )
	{
		cerr<<"pos is out range!"<<endl;
		exit(1);
	}
	return L.list [pos-1];
}
void TraverseList(List &L)
{
	for(int i=0;i<L.size ;i++)
		cout<<L.list [i]<<' ';
	cout<<endl;
}
bool FindList(List &L,T &item)
{
	for(int i=0;i<L.size ;i++)
	{
		if(L.list [i]==item)//���TΪ�ַ�����������strcmp(L.list[i],item)==0��Ϊ������
		{
			item=L.list [i];
			return true;
		}
		
	}
	return false;
}
bool UpudateList(List &L,const T& item)
{
	for(int i=0;i<L.size ;i++)
	{	
		if(L.list [i]==item)
		{
			L.list [i]=item;
			return true;
		}
	}
	return false;
}
bool InsertList(List &L,T item,int pos)
{
	if(pos<-1 || pos>L.MaxSize +1)
	{
		cout<<"pos value is not reasonable!"<<endl;
		return false;
	}
	int i;
	if(pos==0){
		for(i=0;i<L.size ;i++)
		{
			if(item<L.list [i])break;
		}
		pos=i+1;
	}
	else if(pos==-1){
		pos=L.size +1;
	}
	if(L.size ==L.MaxSize ){
		int k=sizeof(T);
		L.list =(T*)realloc(L.list ,2*L.MaxSize *k);
		if(L.list ==NULL)
		{
			cout<<"the dynamic place is full,please out!"<<endl;
			exit(1);
		}
		L.MaxSize =2*L.MaxSize ;
	}
	for(i=L.size -1;i>=pos-1;i--)
		L.list [i+1]=L.list [i];
	L.list [pos-1]=item;
	L.size ++;
	return true;
}
bool DeleteList(List &L,T& item,int pos)
{
	if(L.size ==0){
		cout<<"���Ա�Ϊ�գ�ɾ����Ч��"<<endl;
		return false;
	}
	if(pos<-1 || pos>L.size ){
		cout<<"posֵ��Ч��"<<endl;
		return false;
	}
	int i;
	if(pos==0){
		for(i=0;i<L.size ;i++)
		{
			if(item==L.list [i])break;
		}
		if(i==L.size )return false;
		pos=i+1;
	}
	else if(pos==-1){
		pos=L.size ;
	}
	item=L.list [pos-1];
	for(i=pos;i<L.size ;i++)
	{
		L.list [i-1]=L.list [i];
	}
	L.size --;
	if(float(L.size )/L.MaxSize <0.4 && L.MaxSize >10){
		int k=sizeof(T);
		L.list =(T*)realloc(L.list ,L.MaxSize *k/2);
		L.MaxSize =L.MaxSize /2
	}
	return true;
}
void SortList(List &L)
{
	int i,j;
	T x;
	for(i=1;i<L.size ;i++){
		x=L.list [i];
		for(j=i-1;j>=0;j--)
			if(x<L.list [j])L.list [j+1]=L.list [J];
			else break;
			L.list [j+1]=x;
	}
}

void main()
{
	int a[12]={1 2 3 4 5 6 7 8 9 0 11 12};
	int i;
	T x;
	List l;
	InitList(l);
	for(i=0;i<12;i++)
		InsertList(l,a[i],i+1);
	InsertList(l,46,14);
	InsertList(l,40,0);
	cout<<GetList(l,4)<<' '<<GetList(l,9)<<endl;
	TraverseList(l);
	cout<<"��������ҵ�Ԫ�أ�";
	cin>>x;
	if(FindList(l,x))
		cout<<"���ҳɹ���"<<endl;
	else
		cout<<"����ʧ�ܣ�"<<endl;
	cout<<"�����ɾ��Ԫ��ֵ��";
	cin>>x;
	if(DeleteList(l,x,0))
		cout<<"ɾ���ɹ���"<<endl;
	else
		cout<<"ɾ��ʧ�ܣ�"<<endl;
	for(int i=0;i<6;i++)
		DeleteList(l,x,i+1);
	TraverseList(l);
	cout<<"��ֵ���룬���������Ԫ�ص�ֵ":";
	cin>>x;
	if(InsertList(l,x,0))
		cout<<"����ɹ���"<<endl;
	else
		cout<<"����ʧ�ܣ�"<<endl;
	TraverseList(l);
	cout<<"���Ա���:"<<LengthList(l)<<endl;
	if(EmptyList(l))
		cout<<"���Ա�Ϊ�գ�"<<endl;
	else
		cout<<"���Ա�Ϊ�գ�"<<endl;
	ClearList(l);
}