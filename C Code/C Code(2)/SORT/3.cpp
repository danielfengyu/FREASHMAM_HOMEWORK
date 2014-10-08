#include<iostream>
using namespace std;
int Partition(int data[],int left,int right)
{
	int pivot=data[left];
	while(left<right)
	{
		while(left<right && data[right]>pivot)
			right--;
		data[left]=data[right];
		while(left<right && data[left] <= pivot)
			left++;
		data[right]=data[left];
	}
	data[left]=pivot;
	return left;
}
void QuickSort(int data[], int left,int right)
{
	if(left<right)
	{
		int p=Partition(data,left,right);
		QuickSort(data,left,p-1);
		QuickSort(data,p+1,right);
	}
}
void main()
{
	int arr[10];
	int num;
	for(int i=0;i<10;i++)
	{
		cin>>num;
		arr[i]=num;
	}
	QuickSort(arr,0,9);
	for(int j=0;j<10;j++)
	{
		cout<<arr[j]<<' ';
	}
	cout<<endl;
}