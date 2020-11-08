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

void insert(int pos,int d)
{
	Node *p=head;
	for(int i=0;i<pos-1;i++)
	{
		p=p->next;
	}
	Node *tem=new Node();
	tem->data=d;
	tem->next=p->next;
	p->next=tem;
	
	
}

void deleteNode(int pos)
{

	Node *p=head;
	Node *q=NULL;
	if(pos==1)
	{
		head=head->next;
		int x=p->data;
		delete p;
	}
		else
		{
		
	for(int i=0;i<pos-1;i++)
	{
		q=p;
		p=p->next;
	}
	q->next=p->next;
	int x=p->data;
	delete p;
}
}

void Reverse(Node *q,Node *p)
{
		if(p!=NULL)
		{
			Reverse(p,p->next);
			p->next=q;
		}
		else
		{
			head=q;
		}
}
/*
int isLoop()
{
Node *p=head;
Node *q=NULL;
q=head;
p=head;
do
{
	p=p->next;
	q=q->next;
	if(q==NULL)
	{
		q=q;
	}
	else
	{
		q=q->next;
	}

}while(p && q && p!=q);
if(p==q)
{
return 1;	
}
else
return 0;

}
*/
int main()
{
	int A[]={1,2,3,4,5,6};
	
	createNode(A,6);

/*	Node *p=head;
	p=p->next->next;
	tail->next=p;
	
	int x=isLoop();
	cout<<x;
	*/
display(head);
	
	insert(3,122);
	cout<<"\n";
	display(head);

	cout<<"\n";

	deleteNode(1);
	display(head);

	cout<<"\nafter reversing\n";
	
	Reverse(NULL,head);
	
	display(head);
	
}
