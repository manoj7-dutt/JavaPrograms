#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

Node *head;
void createNode(int A[],int n)
{
	int i;
	Node *t,*last;
	head=new Node();
	head->data=A[0];
	head->next=head;
	last=head;
	
	for(i=1;i<n;i++)
	{
		t=new Node();
		t->data=A[i];
		t->next=last->next;
		last->next=t;
		last=t;
		
	}
	
}
void display(Node *p)
{
	
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
	cout<<"\n";

}
void Insert(Node *p,int index,int x) 
{
	if(index<0 || index >6)
	{
		return;
	}
	Node *t;
	int i;
	if(index==0)
	{
		t=new Node();
		t->data=x;
		if(head==NULL)
		{
			head=t;
			head->next=head;
		}
		else
		{
			while(p->next!=head)
			{
				p=p->next;
			}
			p->next=t;
			t->next=head;
			head=t;
			
		}
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p=p->next;
		}
		t=new Node();
		t->data=x;
		t->next=p->next;
		p->next=t;
	}
}
int main()
{
	int A[]={1,2,3,4,5,6};
	createNode(A,6);
	display(head);
	Insert(head,4,10);
	display(head);
}
