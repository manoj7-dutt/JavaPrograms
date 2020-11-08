#include<iostream>
using namespace std;

struct Queue
{
int size;
int front;
int rear;
int *Q;	
};

void enqueue(Queue *q,int x)
{
	if(q->rear==q->size-1)
	{
		cout<<"\nQueue is full !!\n";
	}
	else
	{
	q->rear++;
	q->Q[q->rear]=x;
	}
	
}
int dequeue(Queue *q)
{
	int x=-1;
if(q->front==q->rear)
{
	cout<<"\nQueue is empty\n";
	}	
	else
	{
		
		q->front++;
	     x=q->Q[q->front];
	     return x;
	}
}
int main()
{
	Queue q;
	q.front=q.rear=-1;
	cout<<"Enter size of queue:";
	cin>>q.size;
	
	q.Q=new int[q.size];
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
}
