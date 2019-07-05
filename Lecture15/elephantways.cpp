#include<iostream>
using namespace std;

int elephantways(int i,int j)
{
	if(i==0 && j==0)
	{
		return 1;
	}

	int ans=0;
	for(int k=1;k<=i;k++)
	{
		ans+=elephantways(i-k,j);
	}

	for(int k=1;k<=j;k++)
	{
		ans+=elephantways(i,j-k);
	}

	return ans;
}


int main()
{
	int i,j;
	cin>>i>>j;
	cout<<elephantways(i,j)<<endl;
	return 0;
}