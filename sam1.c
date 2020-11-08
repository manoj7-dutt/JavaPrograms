#include<stdio.h>
main()
{
	int x=10;
	int *p=&x;
	int **q=&p;
	printf("%d",**q);
}
