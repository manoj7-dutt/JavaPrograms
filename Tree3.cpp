#include<stdio.h>
#include<stdlib.h>
#include "Queue2.h"
struct Node *root=NULL;



void createTree()
{
	struct Node *p,*t;
	int x;
	Queue q;
	create(&q,100);
	root=new Node();
	printf("Enter root value:");
	scanf("%d",&x);
	
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);
	while(!isEmpty(q))
	{
		p=dequeue(&q);
		printf("\nEnter left child for %d:",p->data);
		scanf("%d",&x);
		if(x!=-1){
			t=new Node();
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t);
			
		}
		
		printf("\nEnter right child for %d:",p->data);
		scanf("%d",&x);
		if(x!=-1)
		{
			t=new Node();
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}
		
		
	}
}

void preorder(struct Node *p)
{
	if(p)
	{
	printf("%d ",p->data);
	preorder(p->lchild);
	preorder(p->rchild);
	}

}

void inorder(struct Node *p)
{
	if(p)
	{
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
	}
}
int count(Node *r)
{
	if(r)
	{
		return count(r->lchild)+count(r->rchild)+1;
	}
	return 0;
}
int height(struct Node *root)
{
 int x=0,y=0;
 if(root==0)
 return 0;
 x=height(root->lchild);
 y=height(root->rchild);
 if(x>y)
 return x+1;
 else
 return y+1;

} 

int main()
{
	createTree();
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n number of nodes is %d ",count(root));
	printf("\n height of tree is %d ",height(root));
	
}
