#include<iostream>
using namespace std;

struct Node{
	Node *lchild;
	int data;
	int height;
	Node *rchild;
};
Node *root=NULL;


int NodeHeight(Node *p)
{
	int hl,hr;
	hl=p && p->lchild?p->lchild->height:0;
	hr=p && p->rchild?p->rchild->height:0;
	
	return hl>hr?hl+1:hr+1;
	
	
}
int BalanceFactor(Node *p)
{
		int hl,hr;
	hl=p && p->lchild?p->lchild->height:0;
	hr=p && p->rchild?p->rchild->height:0;
	
	return hl-hr;
	
}

Node * LLRotation(Node *p)
{
	Node *pl=p->lchild;
	Node *plr=pl->rchild;
	
	pl->rchild=p;
	p->lchild=plr;
	
	p->height=NodeHeight(p);
	pl->height=NodeHeight(pl);
	
	if(root==p)
	{
		root=pl;
		
	}
	return pl;
}

Node * LRRotation(Node *p)
{
	return NULL;
}

Node * RLRotation(Node *p)
{
	return NULL;
}

Node * RRRotation(Node *p)
{
	return NULL;
}

Node *RInsert(Node *p,int key)
{
	Node *t=NULL;
	if(p==NULL)
	{
		t=new Node();
		t->data=key;
		t->height=1;
		t->lchild=t->rchild=NULL;
		
		return t;
	}
	if(key<p->data)
	{
		p->lchild=RInsert(p->lchild,key);
	}
	else if(key>p->data)
	{
		p->rchild=RInsert(p->rchild,key);
	}
	p->height=NodeHeight(p);
	
	
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
	{
		return LLRotation(p);
	}
	else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
	{
		return LRRotation(p);
	}
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==-1)
	{
		return RRRotation(p);
	}
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==1)
	{
		return RLRotation(p);
	}
	return p;
	
}

int main()
{
	root=RInsert(root,10);
	RInsert(root,5);
	RInsert(root,2);
	
	cout<<root->data;  
	
	return 0;
}
