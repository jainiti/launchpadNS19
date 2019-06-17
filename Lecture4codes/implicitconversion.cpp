#include<iostream>
using namespace std;

int main()
{
	char ch='A';
	cout<<(char)(ch+1)<<endl;
	ch=ch+1;
	cout<<ch<<endl;
	// ch=90;
	// cout<<ch<<endl;
	// ch=789;
	// cout<<ch<<endl;
    for(int i=1;i<=5;i++)
    {
    	cout<<ch<<" ";
    	ch++;
    }

    int n;
    cin>>n;
    int line=1;
    while(line<=n)
    {
    	char ch='A';
    	int ele=1;
    	while(ele<=line)
    	{
    		cout<<ch<<" ";
    		ch++;
    		ele++;
    	}
    	cout<<endl;
    	line++;
    }


	return 0;
}