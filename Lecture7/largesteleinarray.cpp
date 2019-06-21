#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int max=INT_MIN;
    int a[10000];
    int n;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {

    	cin>>a[i];
    	// if(max<a[i])
    	// {
    	// 	max=a[i];
    	// }
    }

    for(int i=0;i<n;i++)
    {
    	if(max<a[i])
    	{
    		max=a[i];
    	}
    }

    cout<<max<<endl;













	return 0;
}