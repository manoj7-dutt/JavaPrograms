#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *head=NULL;
Node *tail=NULL;

void add(int n)
{
	Node *t=new Node();
	t->data=n;
	t->next=NULL;
	if(head==NULL)
	{
		head=t;
		tail=t;
	}
	else
	{
		tail->next=t;
		tail=tail->next;
	}
}

void display()
{
	Node *p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";
}
/*
void reverse(Node *p)
{
	Node *q=NULL;
	Node *r=NULL;
	
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
}*/
void insertAt(int pos,int d)
{
	Node *t=new Node();
	t->data=d;
	if(pos==0)
	{
		t->next=head;
		head=t;
	}
	else
	{
		Node *p=head;
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
	}
}
void deleteAt(int pos)
{
	Node *p=head;
	Node *q=NULL;
	if(pos==0)
	{
		head=head->next;
		int x=p->data;
		delete p;
	}
	for(int i=0;i<pos-1;i++)
	{
		q=p;
		p=p->next;
	}
	q->next=p->next;
	int x=p->data;
	delete p;
	
	
}
void middle(Node *p)
{
	Node *q=head;
	while(q!=NULL)
	{
		p=p->next;
		q=q->next->next;
	}
	cout<<p->data<<"\n";
}
int main()
{
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	add(6);
	
	insertAt(4,20);
	display();
	
	deleteAt(5);
	display();
	middle(head);
	//reverse(head);
	
}
