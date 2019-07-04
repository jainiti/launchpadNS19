#include<iostream>
using namespace std;


int nStairCase(int n)
{

	if(n==0)
	{
		return 1;
	}

	if(n<0)
	{
		return 0;
	}


	int ans=nStairCase(n-1)+nStairCase(n-2)+nStairCase(n-3);
	return ans;
}



int nStairCase1(int n,int k)
{

	if(n==0)
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
		ans+=nStairCase1(n-i,k);
	}
	return ans;
}

int main()
{
   int n,k;
   cin>>n>>k;
   cout<<nStairCase(n)<<endl;
   cout<<nStairCase1(n,k)<<endl;

   return 0;
}