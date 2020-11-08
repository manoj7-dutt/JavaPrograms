#include<iostream>
using namespace std;

struct Node
{
Node *prev;
int data;
Node *next;	
};
Node *head;
Node *tail;
void create(int A[],int n1)
{
	Node *n=new Node();
	n->data=A[0];
	n->prev=NULL;
	n->next=NULL;
	head=n;
	tail=n;
	for(int i=1;i<n1;i++)
	{
		Node *t=new Node();
		t->data=A[i];
		tail->next=>next;
		t->prev=tail;
		tail->next=t;
		tail=t;
		
	}
}

void display()
{
	Node *p=head;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";
}

int main()
{
	int A[]={1,2,3,4,5,6};
	create(A,6);
	display();
}
