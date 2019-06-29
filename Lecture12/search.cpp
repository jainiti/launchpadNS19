#include<iostream>
using namespace std;

int firstindex(int *a,int n,int i,int data)
{

	if(i==n)
	{
		return -1;
	}


	if(a[i]==data)
	{
		return i;
	}

	return firstindex(a,n,i+1,data);

}

int lastindex(int *a,int n,int i,int data)
{
	//base case
	if(i==n)
	{
		return -1;
	}

	int abhiwalaindex=-1,nextindexdedo=-1;
	if(a[i]==data)
	{
	    abhiwalaindex=i;
	    nextindexdedo=lastindex(a,n,i+1,data);
	    if(nextindexdedo>abhiwalaindex)
	    {
	    	abhiwalaindex=nextindexdedo;
	    }
	   return abhiwalaindex;	
	}

	return lastindex(a,n,i+1,data);

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
	int data;
	cin>>data;

	cout<<firstindex(a,n,0,data)<<endl;
	cout<<lastindex(a,n,0,data)<<endl;

	return 0;
}













