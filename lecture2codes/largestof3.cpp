#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter a b and c"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is largest "<<endl;
	}

	else if(b>a && b>c)
	{
		cout<<b <<" is largest "<<endl;
	}

    else 
    {
        cout<<c<<" is largest "<<endl;
    } 

	return 0;
}