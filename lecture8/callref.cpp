#include<iostream>
using namespace std;

void swap(int &val1,int &val2)
{
   int temp=val1;
   val1=val2;
   val2=temp;
   cout<<"inside swap function "<<val1<<" "<<val2<<endl;
   return;
}



int main()
{
	int a=10,b=5;
	cout<<"before swapping "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"after swapping "<<a<<" "<<b<<endl;
	return 0;
}