#include<iostream>
using namespace std;

void welcome()
{
	cout<<"HELLO WORLD"<<endl;
	return;
}

int sum(int a,int b=10)
{
	// int s=a+b;
	// return s;
	return a+b;
}

int sumnum(int a=0,int b=0,int c=0)
{
    return a+b+c;
}



int main()
{
   welcome();
   welcome();
   // int p=sum(3,4);
    // cout<<sum(3,4)<<endl;
    cout<<sumnum(2,3,4)<<endl;
    cout<<sumnum(2,3)<<endl;
    cout<<sumnum(2)<<endl;
    cout<<sumnum()<<endl;
   // cout<<p<<endl;
   // cout<<sum(3,4)<<endl;








   return 0;
}