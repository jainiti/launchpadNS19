#include<iostream>
using namespace std;

int main()
{
	int initial,final,step;
	cin>>initial>>final>>step;

	while(initial<=final)
	{
        int c=(5/9.0)*(initial-32);
        cout<<initial<<" "<<c<<endl;
		initial=initial+step;
	}
	return 0;
}