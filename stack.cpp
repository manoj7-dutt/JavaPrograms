#include<iostream>
using namespace std;

int top=-1;
int size;

void push(int A[],int n)
{
	if(top==size-1)
	{
		cout<<"stack overflow";
	}
	
	else
	{
	top++;
	A[top]=n;
	}
}
int pop(int A[])
{
	int x=-1;
	if(top==-1)
	{
		cout<<"stack underflow\n";
	}
	else
	{
		 x=A[top];
		top--;
		return x;
	}
}
void Display(int A[])
{
	for(int i=top;i>=0;i--)
	{
		cout<<A[i]<<"\n";
	}
	cout<<"\n";
}
int main()
{
	
	cout<<"enter size of array\n";
	cin>>size;
	int A[size];
	for(int i=0;i<size;i++)
	{
		A[i]=0;
	}
	cout<<"\n";
	push(A,1);
	
	push(A,2);
	push(A,3);
	pop(A);
	Display(A);
	
}
