#include<iostream>
using namespace std;

class queue
{
public:
	int *arr;
	int n;
	int cs;
	int f;
	int e;

	queue(int size)
	{
		arr=new int[size];
		n=size;
		cs=0;
		f=0;
		e=n-1;
	}

	void push(int d)
	{
		if(cs==n)
		{
			cout<<"overflow"<<endl;
			return;
		}

		e=(e+1)%n;
		arr[e]=d;
		cs++;
	}

	void pop()
	{
		if(cs==0)
		{
			cout<<"underflow"<<endl;
			return;
		}

		f=(f+1)%n;
		cs--;
	}

	int front()
	{
		return arr[f];
	}

	bool empty()
	{
		return cs==0;
	}

};


int main()
{
	queue q(10);

	for(int i=0;i<10;i++)
	{
		q.push(i);
	}

	q.pop();
	q.pop();
	q.push(99);

	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}

	return 0;
}











