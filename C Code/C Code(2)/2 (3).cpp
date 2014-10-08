#include<iostream>
using namespace std;
template <class T>
class LinkList
{
	private:
		LinkNode<T>*head,tail;
		LinkNode<T>*prevPtr,*currPtr;
		int position;
	public:
		LinkList();
		~LinkList();
		LinkNode<T>*setPos(int pos);//��ʼָ���λ��
		bool insertPos(const int i,const T value);//��ָ��λ�ò���ָ��
		bool deletePos(const int i);//ɾ��ָ��λ�õĽ��
		LinkNode<T>*setPos(int pos);
};
template <class T>
class LinkNode
{
	public:
		T data;//������
		LinkNode<T>*link;//ָ���̽���ָ��
		LinkNode(const T&el,LinkNode<T>*ptr=0){//���캯��
		data=el;
		link=ptr;
		}
};
template<class T>
LinkNode<T>*LinkList<T>::setPos (int pos){
if(pos==-1)//iΪ-1��λ��ͷ���
return head;
int count=0;
LinkNode<T>*p=head->link;
while(p!=NULL&&count<pos)
{
     p=p->link;
	 count++;
}
return p;//ָ���i����㣬��������С��iʱ����NULL
}
template<class T>
bool LinkList<T>::insertPos (const int i,const T value)
{
	LinkNode <T>*p,*q;
	if(p=setPos(i-1)==NULL)//p�ǵ�i������ǰ��
	{
		cout<<"���벻����"<<endl;
		return false;

	}
	q=new LinkNode <T>(value,p->link);
		p->link=q;
		if(p==tail)//�ڱ�β���в�������
			tail=q;
		return true;
}
template<class T>
bool LinkList<T>::deletePos (const int i)

{
	LinkNode<T>*p,q;
	if((p=setPos(i-1))==NULL || p==tail)//��ɾ���㲻����
	{
		cut<<"�Ƿ�ɾ����"<<endl;
		return false;

	}
	q=p->link;//qΪ�����Ĵ�ɾ����
	if(q==tail)//ɾ����Ϊ��β���޸�βָ��
	{
		tail=p;
		p->link=NULL;
		delete q;
	}
	else if(q!=NULL)//ɾ�����q�����޸�ָ��
	{
		p->link=q->link;
		delete q;

	}
	return true;
}
int main()
{
	int num,num1;
	cout<<"�������ݵĸ���:";
	cin>>num;
	for(int i=0;i++;i<num)
	{
	    LinkNode<int>*setPos (0);
		cin>>num1;	
		LinkNode(const T&num1,LinkNode<int>*ptr=0);

	}
return 0;
}
