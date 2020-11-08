#include<iostream>
using namespace std;

class Stack
{
	public:
		
	int top=-1;
	char items[100];

public:void push(char x)
{
	if(top==99)
	{
		cout<<"stack over flow\n";
	}
	else
	{
		items[++top]=x;
	}
}

public:char pop()
{
	if(top==-1)
	{
		cout<<"stack underflow\n"
	}
	char c=items[top];
	top--;
	return c;
}
public:int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
	
}

public:int isMatchingPair(char c1,char c2)
{
	if(c1=='(' && c2==')')
	return 1;
	else if(c1=='{' && c2=='}')
	return 1;
	else if(c1=='[' && c2==']')
	return 1;
	
	return 0;
}

int isBalanced(char exp[])
{
Stack st;

for(int i=0;i<exp.length;i++)
{
	if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
	{
		st.push(exp[i]);
	}
	
	if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
	{
		if(st.isEmpty())
		{
			return 0;
		}
		else if(!isMatchingPair(st.pop(),exp[i])
		{
			return 0;
		}
		{
			
		}
	}
	}
	if(st.isEmpty())
	{
	return 1;	
		}	
		else
		{
			return 0;
		}
	
}

};
int main()
{
	Stack st;
	char exp[]={'{','(','[',']',')','}'};
	if(st.isBalanced(exp))
	{
		cout<<"balanced\n";
	}
	else
	{
		cout<<"not balanced\n";
	}
}



