#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &b=a;
	b++;
	int &c=b;
	c++;
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}