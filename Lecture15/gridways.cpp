#include<iostream>
using namespace std;

int grid(int i,int j)
{
	if(i==0 && j==0)
	{
		return 1;
	}

	if(i<0 || j<0)
	{
		return 0;
	}
	int ans=grid(i,j-1)+grid(i-1,j);
	return ans;

}


int main()
{
	int n,m;
	cin>>n>>m;
	cout<<grid(n,m)<<endl;
	return 0;
}