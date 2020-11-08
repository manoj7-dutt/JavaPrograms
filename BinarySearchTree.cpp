#include<iostream>
using namespace std;

struct Node{
	Node *lchild;
	int data;
	Node *rchild;
};
Node *root=NULL;

void Insert(int key){
	Node *t=root;
	Node *r=NULL,*p;
	
	if(root==NULL){
		p=new Node();
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->data)
		{
			t=t->lchild;
		}
		else if(key>t->data)
		{
			t=t->rchild;
		}
		else
		{
			return;
		}
	}
		p=new Node();
		p->data=key;
		p->lchild=p->rchild=NULL;
		
		if(key>r->data)
		{
			r->rchild=p;
		}
		else if(key<r->data)
		{
			r->lchild=p;
		}
		
}

void Inorder(Node *p)
{
	if(p)
	{ 
		Inorder(p->lchild);
		cout<<p->data<<" ";
		Inorder(p->rchild);
	}
}
Node * Search(int key)
{
	Node *p=root;
	while(p!=NULL){
		if(key==p->data){
			return p;
		}
		else if(key>p->data)
		{
			p=p->rchild;
		}
		else
		{
			p=p->lchild;
		}
	}
	return NULL;
	
}
int main()
{
	 Insert(20);
	 Insert(30);
	 Insert(40);
	 Insert(10);
	 Insert(15);
	 Insert(35);
	 
	 Node *temp;
	 temp=Search(9);
	 
	 if(temp!=NULL)
	 {
	 	cout<<"element "<<temp->data<<" is found\n";
	 	
	 }
	 else
	 {
	 	cout<<"element not found\n";
	 }
	 
	 Inorder(root);
}
