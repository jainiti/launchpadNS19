#include<iostream>
using namespace std;

int grid(int n,int m)
{
	int dp[100][100]={0};
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}

	for(int i=0;i<=m;i++)
	{
		dp[0][i]=1;
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
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
	cout<<grid(n,m)<<endl;
	return 0;
}