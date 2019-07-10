#include<iostream>
#include<stack>
using namespace std;

void pushBottom(stack<int> &s,int t)
{

	if(s.empty())
	{
		s.push(t);
		return;
	}

	int ele=s.top();
	s.pop();
	pushBottom(s,t);
	s.push(ele);
}


void reverse(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}

	int t=s.top();
	s.pop();
	reverse(s);
	pushBottom(s,t);
}


void print(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int main()
{
	stack<int>s;
	for(int i=0;i<10;i++)
	{
		s.push(i);
	}

	print(s);
	reverse(s);
	print(s);

	return 0;
}