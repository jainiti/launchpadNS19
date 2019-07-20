#include<iostream>
#include<climits>
using namespace std;

int topdown(int n,int *dp)
{
	if(n==1)
	{
		dp[n]=0;
		return dp[n];
	}

	if(dp[n]!=-1)
	{
		return dp[n];
	}
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=1+topdown(n-1,dp);
	if(n%2==0)
	{
		op2=1+topdown(n/2,dp);
	}
	if(n%3==0)
	{
		op3=1+topdown(n/3,dp);
	}

	int ans=min(op1,min(op2,op3));
	dp[n]=ans;
	return dp[n];

}

int bottomup(int n)
{
	int dp[1000];
	dp[1]=0;
	for(int i=2;i<=n;i++)
	{
		int op1=1+dp[i-1];
		int op2=INT_MAX;
		if(i%2==0)
		{
			op2=1+dp[i/2];
		}
		int op3=INT_MAX;
		if(i%3==0)
		{
			op3=1+dp[i/3];
		}
		dp[i]=min(op1,min(op2,op3));

	}

	return dp[n];
}


int minsteps(int n)
{
	if(n==1)
	{
		return 0;
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=1+minsteps(n-1);
	if(n%2==0)
	{
		op2=1+minsteps(n/2);
	}
	if(n%3==0)
	{
		op3=1+minsteps(n/3);
	}

	int ans=min(op1,min(op2,op3));
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int dp[1000];
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<bottomup(n)<<endl;
	cout<<topdown(n,dp)<<endl;
	cout<<minsteps(n)<<endl;
	return 0;
}