#include<iostream>
using namespace std;

int main()
{
	int alpha=0,digits=0,whitespaces=0,others=0;
	char ch;
	ch=cin.get();
	while(ch!='$')
	{
		if((ch>='a' && ch<='z') || (ch>='A' &&ch<='Z'))
		{
			alpha++;
		}
		else if(ch>='0' && ch<='9')
		{
			digits++;
		}
		else if(ch==' ')
		{
            whitespaces++;
		}
		else 
		{
			others++;
		}
		ch=cin.get();
	}


    cout<<"alphabets are "<<alpha<<endl;
    cout<<"digits are "<<digits<<endl;
    cout<<"whitespaces are "<<whitespaces<<endl;
    cout<<"other special characters are "<<others<<endl;

	return 0;
}