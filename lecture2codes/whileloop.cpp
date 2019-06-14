#include<iostream>
#include<climits>
using namespace std;

int main()
{
	// int i=1;
	// while(i<=10)
	// {
	// 	cout<<"coding blocks"<<endl;
	// 	i=i+1;
	// }

	int n;
	cout<<"enter number of terms"<<endl;
	cin>>n;

    int sum=0;
    int i=1;
    
    int max=INT_MIN;
    int min=INT_MAX;
    int a;
    while(i<=n)
    {
    	cin>>a;
    	sum=sum+a;
        if(max<a)
        {
        	max=a;
        }

        if(min>a)
        {
        	min=a;
        }

        i=i+1;
    }
    
    cout<<"sum is "<<sum<<endl;
    cout<<"min value is "<<min<<endl;
    cout<<"max value is "<<max<<endl;

	return 0;
}