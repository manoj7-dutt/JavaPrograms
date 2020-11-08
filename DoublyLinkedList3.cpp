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
void createNodes(int A[],int len)
{
	Node *n1=new Node();
	n1->data=A[0];
	n1->prev=NULL;
	n1->next=NULL;
	
	head=n1;
	tail=n1;
	for(int i=1;i<len;i++)
	{
		Node *t=new Node();
		t->data=A[i];
		tail->next=t;
		t->prev=tail;
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
void revDisplay()
{
	Node *p=tail;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->prev;
	}
	cout<<"\n";
}
int main()
{
	int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	createNodes(A,13);
	display();
	revDisplay();
	
	
}

