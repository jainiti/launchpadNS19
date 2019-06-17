#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,no;
	for(no=2;no<=n;no++)
	{
		int flag=0;
		for(i=2;i<no;i++)
		{
            if(no%i==0)
            { 
            	break;
            }
		}
		if(i==no)
		{
			cout<<no<<" ";
		}
	}

	cout<<endl;
	return 0;

}