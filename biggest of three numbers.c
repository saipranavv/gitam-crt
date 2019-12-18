#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is smaller %d\n",a);
	else if(b>c)
	printf("c is greater %d\n",c);
	else
	printf("c is greater %d\n");
	
	return 0;
}
