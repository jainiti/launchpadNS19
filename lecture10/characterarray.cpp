#include<iostream>
using namespace std;

int length(char *ch)
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{

	}
	return i;
}

void readline(char *ch,char delimeter='\n')
{
	int i=0;
	char c=cin.get();
	while(c!=delimeter)
	{
		ch[i]=c;
		i++;
		c=cin.get();
	}
	ch[i]='\0';

}

bool pallindrome(char *a)
{
	int i=0;
	int j=length(a)-1;
	while(i<=j)
	{
		if(a[i]!=a[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}




int main()
{
	char ch[]={'A','B','C','\0'};
	char ch1[]="hello";
	char ch2[1000];
	// cin>>ch2;
	cin.getline(ch2,1000);
	// cin.getline(ch2,100,'$');
	// readline(ch2,'$');
	cout<<ch2<<endl;
    
    if(pallindrome(ch2))
    {
    	cout<<"pallindrome"<<endl;
    }
    else
    {
    	cout<<"not pallindrome"<<endl;
    }














	// cout<<length(ch2)<<endl;
	// cout<<ch<<endl;
	// cout<<ch1<<endl;
	return 0;
}