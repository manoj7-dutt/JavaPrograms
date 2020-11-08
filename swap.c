#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
main()
{
	int a=10;
	int b=20;
	swap(&a,&b);
	printf("%d %d",a,b);
}
