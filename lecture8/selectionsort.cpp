#include<iostream>
using namespace std;

void selectionsort(int a[100],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
	return;
}

void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
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
    selectionsort(arr,n);
    printarray(arr,n);


	return 0;
}