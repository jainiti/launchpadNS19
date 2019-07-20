#include<iostream>
using namespace std;

int elephantways(int n,int m)
{
	int dp[100][100]={0};
	int val=1;

	dp[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=val;
		val*=2;
	}

	val=1;
	for(int i=1;i<=m;i++)
	{
		dp[0][i]=val;
		val*=2;
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int ans=0;
			for(int row=0;row<i;row++)
			{
				ans+=dp[row][j];
			}

			for(int col=0;col<j;col++)
			{
				ans+=dp[i][col];
			}

			dp[i][j]=ans;
		}
	}


	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[n][m];
}


int main()
{
	int n,m;
	cin>>n>>m;
	cout<<elephantways(n,m)<<endl;
	return 0;
}