struct Node{
	Node *lchild;
	int data;
	Node *rchild;
};

struct Queue{
	int size;
	int front;
	int rear;
	Node **Q;
};

void create(struct Queue *q,int size)
{
	q->size=size;
	q->front=q->rear=0;
	q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}

void enqueue(struct Queue *q,Node *x){
	if((q->rear+1)%q->size==q->front){
		printf("queue is full");
	}
	else{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}
Node  * dequeue(struct Queue *q)
{
	Node *x;
	if(q->front==q->rear){
		printf("queue is empty");
	}
	else
	{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}
int isEmpty(struct Queue q)
{
	return q.front==q.rear;
}
