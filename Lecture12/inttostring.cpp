#include<iostream>
using namespace std;

char ch[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void inttostring(int n)
{
	if(n==0)
	{
		return;
	}

	int lastterm=n%10;
	inttostring(n/10);
	cout<<ch[lastterm]<<" ";
	return;
}


int main()
{
	int n;
	cin>>n;
	inttostring(n);
	return 0;
}