#include<iostream>
using namespace std;

void merge(int *a,int *x,int *y ,int s,int e)
{

    int i=s;
    int mid=(s+e)/2;

    int j=mid+1;
    int k=s;

    while(i<=mid && j<=e)
    {
    	if(x[i]>y[j])
    	{
    		a[k]=y[j];
    		k++;
    		j++;
    	}

    	else
    	{
    		a[k]=x[i];
    		i++;
    		k++;
    	}
    }
    
    while(i<=mid)
    {
    	a[k]=x[i];
    	k++;
    	i++;
    }

    while(j<=e)
    {
    	a[k]=y[j];
    	k++;
    	j++;	
    }



}



void mergesort(int *a,int s,int e)
{

	//base case
	if(s>=e)
	{
		return;
	}
    
    int mid=(s+e)/2;

    int x[100],y[100];

    for(int i=s;i<=mid;i++)
    {
    	x[i]=a[i];
    }

    for(int i=mid+1;i<=e;i++)
    {
    	y[i]=a[i];
    }

    //break
    mergesort(x,s,mid);
    mergesort(y,mid+1,e);

    merge(a,x,y,s,e);



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

	mergesort(a,0,n-1);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}