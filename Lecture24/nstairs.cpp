#include<iostream>
using namespace std;

int nstairs(int n,int k)
{
	if(n==1||n==0)
	{
		return 1;
	}

	if(n<0)
	{
		return 0;
	}

	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=nstairs(n-i,k);
	}
	return ans;
}

int topdown(int n,int k,int *dp)
{
	if(n==1||n==0)
	{
		dp[n]=1;
		return dp[n];
	}

	if(dp[n]!=-1)
	{
		return dp[n];
	}

	if(n<0)
	{
		return 0;
	}

	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=topdown(n-i,k,dp);
	}
	dp[n]=ans;

	return dp[n];

}

int bottomup(int n,int k)
{
	int dp[1000]={0};
	dp[0]=1;
	dp[1]=1;
	for(int stairs=2;stairs<=n;stairs++)
	{
		for(int steps=1;steps<=k;steps++)
		{
			if(stairs-steps>=0)
			{
				dp[stairs]+=dp[stairs-steps];
			}
		}
	}
	return dp[n];
}


int optimized(int n,int k)
{
	int dp[1000];
	dp[0]=1;
	dp[1]=1;
	for(int stairs=2;stairs<=n;stairs++)
	{
		if(stairs-1-k>=0)
		{
			dp[stairs]=2*dp[stairs-1]-dp[stairs-1-k];
		}
		else
		{
			dp[stairs]=2*dp[stairs-1];
		}

	}
}

int main()
{
	int n,k;
	cin>>n>>k;
	int dp[1000];
	for(int i=0;i<1000;i++)
	{
		dp[i]=-1;
	}
	cout<<bottomup(n,k)<<endl;
	cout<<optimized(n,k)<<endl;
	cout<<topdown(n,k,dp)<<endl;
	cout<<nstairs(n,k)<<endl;
	return 0;
}