#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head=NULL;
Node *tail=NULL;
void Insert(int d)
{
	Node *t=new Node();
	t->data=d;
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
	Node *h=head;
	while(h!=NULL)
	{
		cout<<h->data<<" ";
		h=h->next;
	}
}
int main()
{
		Insert(1);
		Insert(2);
		Insert(3);
		Insert(4);
		Reverse
		Del
		
		display();

}
