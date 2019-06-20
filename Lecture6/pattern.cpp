#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int line=1;line<=n;line++)
	{
		for(int stars=1;stars<=line;stars++)
		{
			cout<<"*";
		}
		cout<<" ";
        
        for(int stars=1;stars<=n-line+1;stars++)
        {
        	cout<<"*";
        }
        cout<<" ";
        
        for(int stars=1;stars<=n-line+1;stars++)
        {
        	cout<<"*";
        }

        cout<<" ";
        for(int stars=1;stars<=line;stars++)
		{
			cout<<"*";
		}

		cout<<endl;

	}
	return 0;
}