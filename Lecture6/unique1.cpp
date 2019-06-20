#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		ans^=a;
	}
	cout<<ans<<endl;
	return 0;
}