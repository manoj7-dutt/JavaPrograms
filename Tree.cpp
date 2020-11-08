#include<iostream>
using namespace std;

struct Tree{
	Tree *lchild;
	int data;
	Tree *rchild;
};

struct Node
{
	Tree *data;
	Node *next;
};

Node *front=NULL;
Node *rear=NULL;
Tree *root=NULL;
void enqueue(Tree *x)
{
	Node *t=new Node();
	if(t==NULL)
	{
		cout<<"FULL\n";
	}
	else{
	
	t->data=x;
//	cout<<"address is .. "<<x<<endl;
	t->next=NULL;
	if(front==NULL)
	{
		front=t;
		//rear=t;
	}
	else
	{
		rear->next=t;
		rear=t;
	}
}

}

Tree * deQ()
{
	Tree *x=NULL;
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
int isEmpty()
{
front==rear;
}

void createTree()
{
	Tree *p,*t;
	int x;
	cout<<"Enter Root Value:";
	cin>>x;
	root=new Tree();
	root->data=x;
	root->lchild=root->rchild=NULL;
	
	enqueue(root);
	
	
	while(!isEmpty())
	{
		cout<<"\nentered loop..";
		p=deQ();
		cout<<"\nEnter left child:";
		cin>>x;
		if(x!=-1){
			t=new Tree();
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(t);
		}
		cout<<"\nEnter right child:";
		cin>>x;
			if(x!=-1){
			t=new Tree();
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(t);
		}
		
	}
}
void preorder(Tree *r)
{
	if(r)
	{
		cout<<r->data<<" ";
		preorder(r->lchild);
		preorder(r->rchild);
	}
}
int main()
{
	createTree();
	
	preorder(root);
}
