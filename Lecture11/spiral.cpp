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
			cin>>arr[row][cols];
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

	//spiral print
     int sr=0,er=r-1,sc=0,ec=c-1;

     while(sr<=er && sc<=ec)
     {
     	for(int i=sc;i<=ec;i++)
     	{
     		cout<<arr[sr][i]<<" ";
     	}

     	sr++;

     	for(int i=sr;i<=er;i++)
     	{
     		cout<<arr[i][ec]<<" ";
     	}

     	ec--;
        
        if(sr<=er)
        {
        	for(int i=ec;i>=sc;i--)
     		{
     			cout<<arr[er][i]<<" ";
     		}

     		er--;
        }
     	
     	if(sc<=ec)
     	{
	     	for(int i=er;i>=sr;i--)
	     	{
	     		cout<<arr[i][sc]<<" ";
	     	}

	     	sc++;
	     }
     }
















	return 0;
}