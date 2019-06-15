#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int line=1;
	while(line<=n)
	{
        int spaces=1;
        while(spaces<=n-line)
        {
        	cout<<"  ";
        	spaces++;
        }

        int val=line;

        int ele=1;
        while(ele<=line)
        {
        	cout<<val<<" ";
        	val++;
            ele++;
        }
        
        val=val-2;
        ele=1;
        while(ele<=line-1)
        {
        	cout<<val<<" ";
        	val--;
        	ele++;
        }

        cout<<endl;

		line++;
	}


    return 0;
}