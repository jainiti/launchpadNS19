#include<iostream>
#include<cstring>
using namespace std;

int LCS(char *str1,char *str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);

	int dp[len1+1][len2+1];

	for(int i=0;i<=len1;i++)
	{
		for(int j=0;j<=len2;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
			}

			else if(str1[i-1]==str2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}


	for(int i=0;i<=len1;i++)
	{
		for(int j=0;j<=len2;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return dp[len1][len2];

}

int main()
{
	char str1[100],str2[100];
	cin>>str1>>str2;
	cout<<LCS(str1,str2)<<endl;
	return 0;
}