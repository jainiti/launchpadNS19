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

    int data;
    cin>>data;

    int row;
    for(row=0;row<r;row++)
	{
		int flag=0;
		for(int cols=0;cols<c;cols++)
		{
			if(arr[row][cols]==data)
			{
				cout<<"found"<<endl;
                flag=1;
                break;
			}
		}

		if(flag)
		{
			break;
		}
	}

	if(row==r)
	{
		cout<<"not found"<<endl;
	}











	return 0;
}