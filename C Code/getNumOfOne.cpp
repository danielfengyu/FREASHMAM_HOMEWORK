#include<stdio.h>
int NumberOf1_Solution2(int i)
{
      int count = 0;
      unsigned int flag = 1;
      while(flag)
      {
            if(i & flag)
                  count ++;

            flag = flag << 1;
      }

      return count;
}
int main()
{
	int iResult=0,iNum=0;
	printf("输入一个整数:");
	scanf("%d",&iNum);
	iResult=NumberOf1_Solution2(iNum);
	printf("结果：%d\n",iResult);
	return 0;
	
}