#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	// cin.ignore();
	cin.get();
	char ch[1000];
	cin.getline(ch,1000);
	cout<<n<<endl;
	cout<<ch<<endl;
	return 0;
}