#include<iostream>
using namespace std;

int sum(int *a,int n)
{
	if(n==0)
	{
		return 0;
	}


	int s=a[0]+sum(a+1,n-1);
    return s;

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
    
    cout<<sum(a,n)<<endl;

    
    return 0;
}    