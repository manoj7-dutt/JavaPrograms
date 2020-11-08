#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

Node *head=NULL;
Node *tail=NULL;

void createNode(int A[],int n)
{
	Node *n1=new Node();
	n1->data=A[0];
	n1->next=NULL;
	head=n1;
	tail=n1;
	
	for(int i=1;i<n;i++)
	{
		Node *t=new Node();
		t->data=A[i];
		t->next=NULL;
		tail->next=t;
		tail=tail->next;
	}
	
}

void display(Node *h)
{
	Node *p=h;
	if(p!=NULL)
	{
		cout<<p->data<<" ";
		display(p->next);
	}
	
}

Node* search(Node *p,int key)
{
	Node *q;

	while(p!=NULL){
	
	if(p->data==key)
	{
		q->next=p->next;
		p->next=head;
		head=p;
		return p;
	}
	q=p;
	p=p->next;
}
return NULL;
	
}

int main()
{
	int A[]={1,2,3,4,5,6};
	createNode(A,6);
	display(head);
	int key=3;
	search(head,key);
	cout<<"\n";
	display(head);
	
}
