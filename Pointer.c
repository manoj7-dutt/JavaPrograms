#include<stdio.h>
struct Node
{
	int i1;
	char c1;
};
main()
{
	struct Node p;
	struct Node *ptr=(int)malloc(sizeof(struct Node));
	printf("%d\n",ptr->i1);
	p.i1=10;
	p.c1='A';
	printf("%d %c",p.i1,p.c1);
}
