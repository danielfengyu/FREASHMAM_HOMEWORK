#include<stdio.h>
int main()
{ 
 int array[20];
 int Array[20][2];
 int i,j,k;
 j = 0;
 k = 0;
 printf("输入一个数组:");
 for(i=0;i<20;i++)
	 scanf("%d",&array[i]);
 for(i=0; i<20; i++)
 {
  if(array[i]%2==0)  /*如果是偶数，存放在第0列*/
   Array[j++][0] = array[i];
  else               /*如果是奇数，存放在第1列*/
   Array[k++][1] = array[i];
 }
 printf("二维数组为:\n");
   for(i=0; i<10; i++)
 printf("%d  ",Array[i][0]);
	 printf("\n");
   for(i=0; i<10; i++)
 printf("%d  ",Array[i][1]);

    printf("\n");
 return 0;
}