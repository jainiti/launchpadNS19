#include<iostream>
using namespace std;

int bottomup(int n)
{
	int dp[1000];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}


int topdown(int n,int *dp)
{
	if(n==0||n==1)
	{
		dp[n]=n;
		return n;
	}

	if(dp[n]!=-1)
	{
		return dp[n];
	}

	int ans=topdown(n-1,dp)+topdown(n-2,dp);
	dp[n]=ans;
	return dp[n];
}


int fibo(int n)
{
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
	int dp[10000];
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<bottomup(n)<<endl;
	cout<<topdown(n,dp)<<endl;
	cout<<fibo(n)<<endl;
	return 0;
}




































