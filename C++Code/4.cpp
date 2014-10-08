#include <iostream>
using namespace std;
int main()
{
	int yf,lf,wf,cont=0;
	for(yf=0;yf<=100;yf++)
		for(lf=0;lf<=50;lf++)
			for(wf=0;wf<=20;wf++)
			{
			  if(yf+2*lf+5*wf==100)
			  {
				cont++;
				cout<<"yf="<<yf<<' '<<"lf="<<lf<<' '<<"wf="<<wf<<endl;
			  }
			}
    cout<<"·½·¨Êý:"<<cont;
			  
	return 0;
}