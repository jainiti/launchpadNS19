#include<iostream>
using namespace std;

int topdown(int *wine,int i,int j,int day,int dp[][100])
{
	if(i>j)
	{	
		dp[i][j]=0;
		return 0;
	}

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}

	int op1=wine[i]*day+topdown(wine,i+1,j,day+1,dp);
	int op2=wine[j]*day+topdown(wine,i,j-1,day+1,dp);

	dp[i][j]=max(op1,op2);
	return dp[i][j];
}

int wineprb(int *wine,int i,int j,int day)
{
	if(i>j)
	{
		return 0;
	}

	int op1=wine[i]*day+wineprb(wine,i+1,j,day+1);
	int op2=wine[j]*day+wineprb(wine,i,j-1,day+1);

	return max(op1,op2);
}

int bottomup(int *wine,int n)
{
	int dp[100][100]={0};
	int day=n;

	for(int i=0;i<n;i++)
	{
		dp[i][i]=wine[i]*day;
	}
	day--;

	for(int len=2;len<=n;len++)
	{
		int i=0;
		int maxi=n-len;
		while(i<=maxi)
		{
			int j=i+len-1;
			int op1=wine[i]*day+dp[i+1][j];
			int op2=wine[j]*day+dp[i][j-1];
			dp[i][j]=max(op1,op2);
			i++;
		}
		day--;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[0][n-1];
}



int main()
{
	int wine[]={2,3,5,1,4};
	int n=sizeof(wine)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			dp[i][j]=-1;
		}
	}

	cout<<bottomup(wine,n)<<endl;
	cout<<topdown(wine,0,n-1,1,dp)<<endl;
	cout<<wineprb(wine,0,n-1,1)<<endl;
	return 0;
}



















































