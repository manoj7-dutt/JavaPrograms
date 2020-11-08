#include<iostream>
using namespace std;
class Node
{
public:
 int data;
 Node *next;	
};
Node *head=NULL;
Node *tail=NULL;
void insert(int d)
{
	Node *cur=new Node();
	
	if(head==NULL)
	{
		head=cur;
		cur->data=d;
		tail=cur;
	}
	else
	{
		cur->data=d;
		tail->next=cur;
		tail=tail->next;
		
	}
}
void display(Node *h)
{
	while(h)
	{
		cout<<h->data<<"\n";
		h=h->next;
	}
}
void form()
{
	Node *h=tail;
	h->next=head;	
}

int getMid()
{
	int mid;
	Node *fp=head; 
	Node *sp=head;
	if(head!=NULL)
	while(fp!=NULL && fp->next!=NULL)
	{
		fp=fp->next->next;
		sp=sp->next;
	
	}
	mid=sp->data;
	return mid;
}
void Delete(int pos)
{
	Node *t=head;
	
	for(int i=0;t!=NULL && i<pos-1;i++)
	{
		t=t->next;
	}
	if(t==NULL || t->next==NULL)
	{
		return;
	}
	Node *ne= t->next->next;
	
	delete t->next;
	t->next=ne;
	
	
}
Node* reverseList(Node *h)
{
	Node *p=h;
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
	insert(7);
 	insert(8);
	//display(head);
	//form();

	display(head);
		cout<<endl<<"mid element "<<getMid()<<endl;
	//	Delete(9);
	//	cout<<"\nafter delete\n"; 
	//display(head);
Node *pt1=reverseList(head);	
display(pt1);
//	display(head);
rev(2,4);
	
}
