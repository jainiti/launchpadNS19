#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;
    
    if(ch>=65 && ch<=90)
    {
       cout<<"upper case"<<endl;
    }

    
    if(ch>='a' && ch<='z')
    {
      cout<<"lower case"<<endl;
    }

	return 0;
}
