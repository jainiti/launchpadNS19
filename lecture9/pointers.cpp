#include<iostream>
using namespace std;

int main()
{
	// int a=10;
	// cout<<a<<endl;
	// cout<<&a<<endl;
	// int *ptr;
	// ptr=&a;
	// cout<<ptr<<endl;


	int a=10;
	int *iptr=&a;

	float f =10.1;

    float *fptr=&f;



    // cout<<&a<<endl;
    // cout<<iptr<<endl;
    // cout<<iptr+1<<endl;

    // cout<<&f<<endl;
    // cout<<fptr<<endl;
    // cout<<fptr+1<<endl;

    // char ch='A';
    // char *chptr=&ch;
    // int *ptr=(int *)&ch;

    // cout<<(int *)&ch<<endl;
    // cout<<(float *)chptr<<endl;
    // cout<<(float *)(chptr+1)<<endl;

       // cout<<iptr<<endl;
       // cout<<*iptr<<endl;




      int arr[]={1,2,3,4,5,6};

      cout<<arr<<endl;
      cout<<&arr+1<<endl;
      cout<<&arr[0]+1<<endl;


















	return 0;
}