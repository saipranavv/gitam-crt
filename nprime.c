#include<stdio.h>
int main()
{
	int n,i,j,flag;
	printf("enter the no");
	scanf("%d",&n);
	for(i=2;n>0;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\n",i);
			n--;
		}
		
	}
	return 0;
}
