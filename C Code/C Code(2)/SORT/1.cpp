#include<iostream>
using namespace std;
void InsertionSort(int Data[],int n)
{
	int p,i;
	for(p=1;p<n;i++)
	{
		int temp=Data[p];
		i=p-1;
		while(i>=0 && Data[i]>temp)
		{
			Data[i+1]=Data[i];
			i--;
		}
		Data[i+1]=temp;
	}
}
void main()
{
	int arr[10],num;
	for(int i=0;i<10;i++)
	{
		cin>>num;
		arr[i]=num;
	}
	InsertionSort(arr,10);
	for(int j=0;j<10;j++)
	{
		cout<<arr[i];
	}

}