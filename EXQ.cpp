struct Node
{
	Node *lchild;
	int data;
	Node *rchild;
};

struct Queue
{
int size;
int front;
int rear;
Node **Q;	
};

void create(struct Queue *q,int size)
{
q->size=size;
q->front=q->rear=0;
q->Q=(Node **)malloc(q->size*sizeof(Node *));	
}

void enqueue(Queue *q,Node *x){
	if((q->rear+1)%q->size==q->front){
		cout<<"Queue is FULL\n";
	}
	else
	{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}
Node * dequeue(Queue *q){
	Node *x=NULL;
	if(q->front==q->rear){
		cout<<"Queue is Empty\n";
	}
	else
	{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}

int isEmpty(Queue q)
{
 return q.front==q.rear;
}
