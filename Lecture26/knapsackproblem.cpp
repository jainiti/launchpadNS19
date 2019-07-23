#include<iostream>
using namespace std;

int knapsack(int *wts,int *profit,int n,int capacity)
{
	if(n==0 || capacity==0)
	{
		return 0;
	}

	int inc=0,exc=0;
	if(wts[n-1]<=capacity)
	{
		inc=profit[n-1]+knapsack(wts,profit,n-1,capacity-wts[n-1]);
	}
	exc=knapsack(wts,profit,n-1,capacity);
	return max(inc,exc);
}

int bottomup(int *wts,int *profit,int n,int capacity)
{
	int dp[100][100]={0};

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=capacity;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
			}

			int inc=0,exc=0;
			if(wts[i-1]<=j)
			{
				inc=profit[i-1]+dp[i-1][j-wts[i-1]];
			}
			exc=dp[i-1][j];
			dp[i][j]=max(inc,exc);
		}
	}


	return dp[n][capacity];
}

int main()
{
	int wts[]={2,2,3,1};
	int profit[]={10,20,10,15};
	int capacity;
	cin>>capacity;
	int n=sizeof(wts)/sizeof(int);
	cout<<bottomup(wts,profit,n,capacity)<<endl;
	cout<<knapsack(wts,profit,n,capacity)<<endl;
	return 0;
}











