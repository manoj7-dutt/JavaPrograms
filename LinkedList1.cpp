#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void createList(int A[],int x)
{
	Node *n=new Node();
	n->data=A[0];
	n->next=NULL;
	head=n;
	tail=n;
	for(int i=1;i<x;i++)
	{
		Node *temp=new Node();
		temp->data=A[i];
		temp->next=NULL;
		tail->next=temp;
		tail=tail->next;
		
	}
	
}
void display(Node *h)
{
	while(h!=NULL)
	{
		cout<<h->data<<" ";
		h=h->next;
	}
}
int main()
{
	
	int A[]={3,4,5,6,9};
	createList(A,5);
	display(head);
}
