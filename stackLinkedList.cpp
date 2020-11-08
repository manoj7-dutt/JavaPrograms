#include<iostream>
using namespace std;

struct Node
{
int data;
Node *next;	
};
Node *top;

void push(int x)
{
	Node *t=new Node();
	if(t==NULL)
	{
		cout<<"stack overFlow!!!";
	}
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int pop()
{
	int x=-1;
Node *p=top;
if(top==NULL)
{
	cout<<"stack is empty!!";
}
else
{

top=top->next;
 x=p->data;
delete p;
}
return x;
	
}

int peek(int pos)
{
	Node *p=top;
	for(int i=0;p!=NULL && i<pos-1;i++){
		p=p->next;
	}
	if(p!=NULL)
	{
		return p->data;
	}
	else
	return -1;
}
void display()
{
	Node *p=top;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
int isEmpty()
{
	if(top==NULL){
		return 1;
	}
	return 0;
}

void rev(Node *h)
{
	
	int i=top->data;
if(isEmpty()){
	push(i);
}
else
{
	i=top->data;
	pop();
	rev(h);
	push(i);
}

}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	int p=peek(3);
	cout<<" peek value is "<<p<<endl;
	/*pop();
	pop();
	pop();
	pop();*/
	rev(top);
	display();
}
