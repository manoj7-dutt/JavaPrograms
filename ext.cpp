#include<iostream>
using namespace std;

template<class T>
class calc
{
private:
T a;
T b;
public:
calc(T a,T b);
int add();
int sub();	
};
template<class T>
calc<T>::calc(T a,T b)
{
	this->a=a;
	this->b=b;
}
template<class T>
calc<T>::add()
{
	T c;
	c=a+b;
	return c;
}
template<class T>
calc<T>::sub()
{
	T c;
	c=a-b;
	return c;
}

int main()
{
	
	calc<int>ob1(10,5);
	calc<float>ob2(10.5,11.5);
	cout<<ob1.add();
	cout<<ob2.sub();
	
}

