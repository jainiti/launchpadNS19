#include<iostream>
using namespace std;

void bubblesort(int *a,int n,int i)
{
	//base case
	if(i==n-1)
	{
		return;
	}

	for(int j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
		}
	}

	bubblesort(a,n,i+1);
}


void bubblesort1(int *a,int n,int i,int j)
{

	//base case
	if(i==n-1)
	{
		return;
	}

	if(j==n-i-1)
	{
		bubblesort1(a,n,i+1,0);
		return;
	}

	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}

	bubblesort1(a,n,i,j+1);
}





int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	// bubblesort(a,n,0);
	bubblesort1(a,n,0,0);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}