#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
   	Node *head = NULL;
 Node *tail = NULL;
void add(int n)
    {

       Node *n1=new Node();
       n1->data=n;
       n1->next=NULL;

       if(head==NULL)
       {
       	head=n1;
       	tail=n1;
	   }
	   else
	   {
	   	tail->next=n1;
	   	tail=tail->next;
	   }

    }

void display()
{
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
void Search(int n)
{
	 int count=0;
	Node *curr=head;
	while(curr->data!=n)
	{
			if(curr->next==NULL)
		break;
		curr=curr->next;

	}
	if(curr!=tail)
	{
		cout<<n;
	}
	else
	{
		cout<<"-1";
	}
}
int main()
{
cout<<"hi nikas";
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	Search(4);
	display();
}
