#include<iostream>
using namespace std;


void selectionsort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
           if(*(a+min)>*(a+j))
           {
           	  min=j;
           }
		}
		swap(*(a+min),*(a+i));
	}

	return;
}

void bubblesort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				swap(*(a+j),*(a+j+1));
			}
		}
	}
	return;	
}

int main()
{
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	// selectionsort(arr,n);
	bubblesort(arr,n);

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}