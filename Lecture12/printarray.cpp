#include<iostream>
using namespace std;

void printarray(int *a,int n)
{
    
    //base case
    if(n==0)
    {
    	return;
    }

    cout<<a[0]<<" ";
    //recursive case
    printarray(a+1,n-1);
}


void printreversearray(int *a,int n)
{
    
    //base case
    if(n==0)
    {
    	return;
    }

    
    //recursive case
    printreversearray(a+1,n-1);
    cout<<a[0]<<" ";
}

void printarray1(int *a,int n,int i)
{

    if(i==n)
    {
    	return;
    }

	//recursive
	cout<<a[i]<<" ";
	printarray1(a,n,i+1);
}


int main()
{
	int n;
	cin>>n;

	int a[1000];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	printarray(a,n);
	cout<<endl;
	printarray1(a,n,0);
	cout<<endl;
	printreversearray(a,n);
    cout<<endl;
	return 0;
}










