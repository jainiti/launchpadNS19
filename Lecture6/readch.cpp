#include<iostream>
using namespace std;

int main()
{
	char ch;
	int count=0;
	// cin>>ch;
	ch=cin.get();
	while(ch!='$')
	{
		count++;
		ch=cin.get();
		// cin>>ch;
	}
	cout<<count<<endl;
	return 0;
}