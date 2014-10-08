#include<iostream.h>
#include<stdlib.h>
void Prim(adjmatrix GA,adgeset CT,int n)
{
	int i,j,k,min,t,m,w;
	for(i=0;i<n-1;i++)
	{
		CT[i].fromvex=0;
		CT[i].endvex=i+1;
		CT[i].weight=GA[0][i+1];
	}
	for()
}