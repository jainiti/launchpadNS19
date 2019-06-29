#include<iostream>
using namespace std;

int main()
{

	int arr[100][100];
	int r,c;
	cin>>r>>c;

	int val=1;
	for(int row=0;row<r;row++)
	{
		for(int cols=0;cols<c;cols++)
		{
			arr[row][cols]=val;
			val++;
		}
	}




	for(int row=0;row<r;row++)
	{
		for(int cols=0;cols<c;cols++)
		{
			cout<<arr[row][cols]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;


//wave print

	for(int col=0;col<c;col++)
	{
		if(col%2==0)
		{

			for(int row=0;row<r;row++)
			{
				cout<<arr[row][col]<<" ";
			}

		}
		else
		{
			for(int row=r-1;row>=0;row--)
			{
				cout<<arr[row][col]<<" ";
			}
		}
	}
















	return 0;
}	