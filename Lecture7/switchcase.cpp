#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;

	switch(ch)
	{
		case 'm':
		case 'M': cout<<"Monday"<<endl;
		           break;

        case 't':
		case 'T': cout<<"tuesday"<<endl;
                   break;

		case 'W': cout<<"wednesday"<<endl;
                  break;
		
		default: cout<<"not a weekday"<<endl;           
	}











}