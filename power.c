#include<stdio.h>
main()
{
	int x=pow(2,4);
	printf("%d",x);
}
int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return m*pow(m,n-1);
	}
}
