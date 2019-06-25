#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
   // cout<<*a<<endl;
	int temp=*a;
	*a=*b;
	*b=temp;
   return;
}

int main()
{
	int x=10,y=12;
	cout<<"before swapping "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"after swapping "<<x<<" "<<y<<endl;
    return 0;
}