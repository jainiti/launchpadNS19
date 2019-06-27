#include<iostream>
using namespace std;

void reverse(int *a,int n)
{
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		swap(a[i],a[j]);
		i++;
		j--;
	}
	return;
}


int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	reverse(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}









