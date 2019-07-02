#include<iostream>
using namespace std;

int binarySearch(int *a,int s,int e,int data)
{
	//base case
	if(s>e)
	{
		return -1;
	}

	int mid=(s+e)/2;

	if(a[mid]==data)
	{
		return mid;
	}

	if(a[mid]>data)
	{
		e=mid-1;
	}

	else
	{
		s=mid+1;
	}

	return binarySearch(a,s,e,data);



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

	int data;
	cin>>data;

	cout<<binarySearch(a,0,n-1,data)<<endl;
	return 0;
}

