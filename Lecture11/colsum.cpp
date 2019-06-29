#include<iostream>
using namespace std;

int main()
{
	int arr[1000][1000];
	int r,c;
	cin>>r>>c;

    int val=1;
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			arr[row][col]=val;
			val++;
		}
	}

	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}


    
    for(int col=0;col<c;col++)
    {
    	int sum=0;
    	for(int row=0;row<r;row++)
    	{
           sum+=arr[row][col];
    	}

    	cout<<sum<<endl;
    }

    return 0;







}