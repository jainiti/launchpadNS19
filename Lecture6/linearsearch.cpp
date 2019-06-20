#include<iostream>
using namespace std;

int main()
{
	int a[10000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int data;
	cout<<"enter data"<<endl;
	cin>>data;
    int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			cout<<"element found at "<<i<<endl;
			break;
		}
	}
    
    if(i==n)
    {
    	cout<<"data not found "<<endl;
    }

    return 0;









}