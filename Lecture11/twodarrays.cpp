#include<iostream>
using namespace std;

int main()
{
	int arr[][3]={{1,2,3},{4,5,6}};
	char ch[][3]={{'A','B','C'},{'D','E','F'}};

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;

	// cout<<ch[0]<<endl;
	// cout<<ch[1]<<endl;


	int a[100][100];
	int r,c;
	cin>>r>>c;

    int val=1;
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			a[row][col]=val;
			val++;
		}
	}



	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	
	for(int col=0;col<c;col++)
	{
		for(int row=0;row<r;row++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
    


















	return 0;
}