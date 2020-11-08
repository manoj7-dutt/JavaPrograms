#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};
Node *head=NULL;
Node *last=NULL;

void createList(int d)
{
	Node *n1=new Node();
	n1->data=d;
	if(head==NULL)
	{
		head=n1;
		last=n1;
	}
	else
	{
		n1->next=NULL;
		last->next=n1;
		last=last->next;
	}
	
}
void display()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<"\n";
		p=p->next;
	}
}
int main()
{
	createList(1);
	createList(2);
	createList(3);
	createList(4);
	createList(7);
	display();
}

