#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head;
Node *tail;

void insert(int d)
{
	Node *n=new Node();
	if(head==NULL)
	{
		head=n;
		tail=n;
		n->data=d;
	}
	else
	{
		tail->next=n;
		tail=n;
		n->data=d;
	}
	
}	
void print(Node *he)
{
	Node *h=he;
	while(h)
	{
	cout<<h->data<<endl;
	h=h->next;
	}
}
int mid(Node *h)
{
	Node *fp=h;
	Node *sp=h;
	while(fp!=NULL && fp->next!=NULL)
	{
	
		fp=fp->next->next;
		sp=sp->next;
	}
	return sp->data;
}
Node* rev(Node *head)
{
	Node *p=head;
	Node *q=NULL;
	Node *r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
		
	}
	return q;
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	print(head);
	cout<<endl<<mid(head)<<endl<<endl;
	Node *q=rev(head);
	print(q);
}
