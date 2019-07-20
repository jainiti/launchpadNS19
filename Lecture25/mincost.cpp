#include<iostream>
using namespace std;

int mincost(int mat[10][10],int x,int y)
{
	if(x==0 && y==0)
	{
		return mat[x][y];
	}

	else if(x==0 && y>0)
	{
		return mincost(mat,x,y-1)+mat[x][y];
	}

	else if(x>0 && y==0)
	{
		return mincost(mat,x-1,y)+mat[x][y];
	}

	else
	{
		int op1=mincost(mat,x,y-1);
		int op2=mincost(mat,x-1,y);

		return min(op1,op2)+mat[x][y];
	}

}


int bottomup(int mat[10][10],int x,int y)
{

	int dp[100][100]={0};

	for(int i=0;i<=x;i++)
	{
		for(int j=0;j<=y;j++)
		{
			if(i==0 && j==0)
			{
				dp[i][j]=mat[i][j];
			}

			else if(i==0 && j>0)
			{
				dp[i][j]=mat[i][j]+dp[i][j-1];
			}

			else if(j==0 && i>0)
			{
				dp[i][j]=mat[i][j]+dp[i-1][j];
			}

			else
			{
				dp[i][j]=mat[i][j]+min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}


	return dp[x][y];


}














int main()
{
	int mat[10][10]={{1,2,5,1},{8,3,6,2},{0,1,3,3},{4,1,7,2}};
	int x,y;
	cin>>x>>y;
	cout<<bottomup(mat,x,y)<<endl;
	cout<<mincost(mat,x,y)<<endl;
	return 0;
}








































































