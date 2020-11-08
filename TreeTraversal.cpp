#include<stdio.h>
#include<stdlib.h>
#include "myQueue.h"
struct Node *root=NULL;
void createTree()
{
	struct Node *p,*t;
	int x;
	struct Queue q;
	create(&q,100);
	
	
	printf("\nEnter root data:");
	scanf("%d",&x);
	root=new Node();
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);
	
	while(!isEmpty(q)){
		p=dequeue(&q);
		printf("Enter left child for %d ",p->data);
		scanf("%d",&x);
		if(x!=-1)
		{
	
		t=new Node();
		t->data=x;
		t->lchild=t->rchild=NULL;
		p->lchild=t;
		enqueue(&q,t);
		}
		printf("Enter right child for %d ",p->data);
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
void Inorder(struct Node *p){
	if(p)
	{
	Inorder(p->lchild);
	printf("%d ",p->data);
	Inorder(p->rchild);
}
}
void postorder(struct Node *p){
	if(p)
	{
	postorder(p->lchild);
	postorder(p->rchild);
	printf("%d ",p->data);
}
}

int main(){
	createTree();
	printf("preOrder:");
	preorder(root);
	printf("\nInorder: ");
	Inorder(root);
	printf("\npostOrder:");
	postorder(root);
	return 0;
}
