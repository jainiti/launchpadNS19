#include<iostream>
using namespace std;

void mergesortedarray(int a[],int m,int b[],int n)
{
	int i=m-1;
	int j=n-1;
	int k=m+n-1;

	while(i>=0 && j>=0)
	{
		if(a[i]>=b[j])
		{
           a[k]=a[i];
           k--;
           i--;
		}
		else if(a[i]<b[j])
		{
			a[k]=b[j];
			k--;
			j--;
		}
	}
    
    while(i>=0)
    {
    	a[k]=a[i];
    	k--;
    	i--;
    }

    while(j>=0)
    {
    	a[k]=b[j];
    	k--;
    	j--;
    }


}


int main()
{
	int a[6]={2,6,10};
	int b[3]={5,7,14};

	mergesortedarray(a,3,b,3);
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;






	return 0;
}