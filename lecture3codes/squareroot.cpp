#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;

	float i=0;
	int precision;
	cin>>precision;

    int j=0;
    float inc=1;
	while(j<=precision)
	{

		while(i*i<=n)
		{
			i=i+inc;
		}
		i=i-inc;
        inc=inc/10;
		//cout<<i<<endl;
        j++;
    }

    cout<<i<<endl;














	return 0;
}