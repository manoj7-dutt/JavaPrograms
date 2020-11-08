#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *front=NULL;
Node *rear=NULL;

void enqueue(int x)
{
	Node *t=new Node();
	if(t==NULL)
	{
		cout<<"FULL\n";
	}
	else{
	
	t->data=x;
	t->next=NULL;
	if(front==NULL)
	{
		front=t;
		rear=t;
	}
	else
	{
		rear->next=t;
		rear=t;
	}
}

}

int deQ()
{
	int x=-1;
	Node *p;
	if(front==NULL)
	{
		cout<<"empty\n";
	}
	else
	{
		p=front;
		front=front->next;
		x=p->data;
		delete p;
	}
	return x;
	
}
void display()
{
	Node *h=front;
	while(h!=NULL)
	{
		cout<<h->data<<" ";
		h=h->next;
	}
	cout<<endl;
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	
	deQ();
	deQ();
	
	display();
	
}
