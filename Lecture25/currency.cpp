#include<iostream>
#include<climits>
using namespace std;

int currency(int amount,int *coins,int n)
{
	if(amount==0)
	{
		return 0;
	}

	int ans=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(amount-coins[i]>=0)
		{
			ans=min(ans,1+currency(amount-coins[i],coins,n));
		}
	}

	return ans;
}


int topdown(int amount,int *coins,int n,int *dp)
{
	if(amount==0)
	{
		dp[amount]=0;
		return dp[amount];
	}

	if(dp[amount]!=-1)
	{
		return dp[amount];
	}


	int ans=INT_MAX;
	int smallans;
	for(int i=0;i<n;i++)
	{
		if(amount-coins[i]>=0)
		{
			// ans=min(ans,1+topdown(amount-coins[i],coins,n,dp));
			smallans=topdown(amount-coins[i],coins,n,dp);
		}
		if(smallans!=INT_MAX)
		{
			ans=min(ans,1+smallans);
		}
	}
	dp[amount]=ans;

	return dp[amount];

}


int bottomup(int amount,int *coins,int n)
{
	int dp[1000];
	for(int i=0;i<=amount;i++)
	{
		dp[i]=INT_MAX;
	}

	dp[0]=0;

	for(int a=1;a<=amount;a++)
	{
		for(int i=0;i<n;i++)
		{
			if(a-coins[i]>=0)
			{
				dp[a]=min(dp[a],1+dp[a-coins[i]]);
			}
		}
	}

	return dp[amount];
		
}

int main()
{
	int coins[]={2,5,9,10};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;
	int dp[1000];
	for(int i=0;i<1000;i++)
	{
		dp[i]=-1;
	}
	// cout<<bottomup(amount,coins,n)<<endl;
	cout<<topdown(amount,coins,n,dp)<<endl;
	// cout<<currency(amount,coins,n)<<endl;
	return 0;
}