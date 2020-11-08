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
void create(int A[],int x)
{
	Node *t1=new Node();
	t1->data=A[0];
	t1->next=NULL;
	t1->prev=NULL;
	head=t1;
	tail=t1;
	for(int i=1;i<x;i++)
	{
		Node *t=new Node();
		t->data=A[i];
		tail->next=t->next;
		t->prev=tail;
		tail->next=t;
		tail=t;
	}
	
}
void Insert(Node *p,int index,int x)
{
	Node *t;
	int i;
	if(index<0 || index > 5)
	{
		return;
	}
	if(index==0)
	{
		t=new Node();
		t->data=x;
		t->prev=NULL;
		t->next=head;
		head=t;
	}
	else
	{
		p=head;
		t=new Node();
		t->data=x;
		for(i=0;i<index-1;i++)
		{
			p=p->next;
		}
		t->next=p->next;
		t->prev=p;
	
		if(p->next)
		{
			p->next->prev=t;
		}
			p->next=t;
		
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
int deleteNode(Node *p,int index)
{
	p=head;
	 int i;
	 if(index<1 || index>5)
	 	return -1;
	 if(index==1)
	 {
	 	p=head;
	 	head=head->next;
	 	int x=head->data;
	 	delete p;
	 	head->prev=NULL;
	 }
	 else
	 {
	 	for(int i=0;i<index-1;i++)
	 	{
	 		p=p->next;
		 }
		 p->prev->next=p->next;
		 if(p->next)
		 {
		 	p->next->prev=p->prev;
		 }
		 int x=p->data;
		 delete p;
		 
	 }
}
void Reverse(Node *p)
{
	p=head; 
	while(p!=NULL)
	{
		Node *temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		
		p=p->prev;
		if(p!=NULL && p->next==NULL)
		{
			head=p;
		}
	}
	
}
int main()
{
	int A[]={1,2,3,4,5};
	create(A,5);
	display();
	
	Insert(head,1,20);
	display();
	
	deleteNode(head,3);
	display(); 
	
	Reverse(head);
	display();
}
