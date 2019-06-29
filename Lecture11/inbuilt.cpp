#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char arr[100];
	cin>>arr;

	int l=strlen(arr);
	cout<<l<<endl;

	char result[1000];
	strcpy(result,arr);
	cout<<"copied result is "<<result<<endl;


	char ch[]="coding";

	strcat(arr,ch);
	cout<<"appended result is "<<arr<<endl;

	return 0;
}









