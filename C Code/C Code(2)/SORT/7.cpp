#include<iostream>
using namespace std;
void PrinMinMax(int A[],int n)
{
	int i;
	int min,max;
	min=A[0];
	max=A[1];
	if(A[0]<A[1])
	{
		min=A[0];
		max=A[1];
	}
	else
	{
		min=A[1];
		max=A[1];
	}
	for(i=2;i<n;i++)
	{
		if(A[i]<min)
			min=A[i];
		if(A[i]>max)
			max=A[i];
	}
	cout<<"�����Сֵ��";
	cout<<min<<endl;
	cout<<"������ֵ��";
	cout<<max<<endl;
}
void main()
{
	int arr[10];
	int num;
	cout<<"����10������";
	for(int i=0; i<10; i++)
	{
		cin>>num;
		arr[i]=num;
	}
	PrinMinMax(arr,10);
}