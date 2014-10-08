#include<iostream>
using namespace std;
void BinaryInsertitionSort(int data[],int n)
{
	int left,mid,right,p;
	cout<<"ÕÛ°ë²åÈëÅÅÐò£º";
	for(p=1;p<n;p++)
	{
		int temp=data[p];
		left=0,right=p-1;
		while(left<=right)
		{
			mid=(left+right)/2;
			if(data[mid]>temp)
				right=mid-1;
			else
				left=mid+1;
		}
		for(int i=p-1;i>=left;i--)
			data[i+1]=data[i];
		data[left]=temp;
	}
}
void ShellSort(int data[],int n)
{
	int d=n/2;
	cout<<"ShellÅÅÐò£º";
	while(d>=1)
	{
		for(int k=0;k<d;k++)
		{
			for(int i=k+d;i<n;i+=d)
			{
				int temp=data[i];
				int j=i-d;
				while(j>=k && data[j] >temp)
				{
					data[j+d]=data[j];
					j-=d;
				}
				data[j+d]=temp;
			}
		}
		d=d/2;
	}
}
void BubbleSort(int data[],int n)
{
	int flag;
	cout<<"Ã°ÅÝÅÅÐò£º";
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=1;j<n-i;j++)
		{
			if(data[j]<data[j-1])
			{
				flag=1;
				int t=data[j];
				data[j]=data[j-1];
				data[j-1]=t;
			}
		}
		if(flag==0)
			return;
	}
}
void SelectionSort(int data[],int n)
{
	cout<<"Ñ¡ÔñÅÅÐò£º";
	for(int i=1;i<n;i++)
	{
		int k=i-1;
		for(int j=i;j<n;j++)
		{
			if(data[j]<data[k])
				k=j;
		}
		if(k!=i-1)
		{
			int temp=data[k];
			data[k]=data[i-1];
			data[i-1]=temp;
		}
	}
}
void main()
{
	int arr[10];
	int num;
	cout<<"input 10 numbers:";
	for(int i=0;i<10;i++)
	{
		cin>>num;
		arr[i]=num;
	}
	BinaryInsertitionSort(arr,10);
	for(int j=0;j<10;j++)
		cout<<arr[j]<<' ';
	cout<<endl;
	ShellSort(arr,10);
	for(int k=0;k<10;k++)
		cout<<arr[k]<<' ';
	cout<<endl;
	BubbleSort(arr,10);
	for(int b=0;b<10;b++)
		cout<<arr[b]<<' ';
	cout<<endl;
	SelectionSort(arr,10);
	for(int c=0;c<10;c++)
		cout<<arr[c]<<' ';
	cout<<endl;
}