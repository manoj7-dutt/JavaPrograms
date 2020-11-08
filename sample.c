#include<stdio.h>
main()
{
A(3);
}

void A(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		A(--n);
	}
	
}
