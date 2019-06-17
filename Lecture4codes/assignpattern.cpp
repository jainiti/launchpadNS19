#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int line=1;
	int val=1;
	while(line<=n)
	{
		
		if(line%2)
		{
		   int no=val;
           int ele=1;
           while(ele<=2*line-1)
           {
           	 if(ele%2)
           	 {
           	 	cout<<no;
           	 	no++;
           	 }
           	 else
           	 {
           	 	cout<<"*";
           	 }
           	 ele++;
           }
           val=val+(line-1)+(line+1);
		}
		else
		{
		   int no=val;
		   int ele=1;
           while(ele<=2*line-1)
           {
	           	if(ele%2)
	           	{
	           	 	cout<<no;
	           	 	no--;
	           	}
	           	else
	           	{
	           	 	cout<<"*";
	           	}
	           	ele++;
           }
           val=val+1;
		}
		cout<<endl;
		line++;
	}
	return 0;
}