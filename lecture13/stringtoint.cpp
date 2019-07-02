#include<iostream>
using namespace std;

int stringtoint(char *ch,int l)
{

	if(l==0)
	{
		return 0;
	}

	int lastterm=ch[l-1]-'0';
	int ans=stringtoint(ch,l-1)*10+lastterm;
	return ans;
}


int main()
{
	char ch[100];
	cin>>ch;
    
    cout<<stringtoint(ch,strlen(ch))<<endl;
    cout<<stringtoint(ch,strlen(ch))/10<<endl;

	return 0;
}