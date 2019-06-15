#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int line=1;
	int val=1;
	while(line<=n)
	{
		int ele=1;
		while(ele<=line)
		{
           cout<<val<<" ";
           val++;
           ele++;
		}

		cout<<endl;
		line++;
    }



	return 0;
}