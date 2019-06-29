#include<iostream>
using namespace std;


int fibo(int n)
{
	//base case
	if(n==0 || n==1)
	{
		return n;
	}

	int ans=fibo(n-1)+fibo(n-2);
	return ans;
}

int main()
{

	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
	return 0;
}