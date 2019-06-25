#include<iostream>
using namespace std;

void printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*(a+i)<<endl;
	}
	return;
}

int main()
{
   int arr[]={1,2,3,4,5,6};
   int n=sizeof(arr)/sizeof(int);
   printarray(arr,n);
   return 0;
}