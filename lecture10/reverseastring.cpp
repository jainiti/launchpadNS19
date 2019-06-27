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


void reverse(char *a)
{
	int i=0;
	int j=length(a)-1;
	while(i<=j)
	{
		swap(a[i],a[j]);
		i++;
		j--;
	}
	return;
}

void rotate(char *a,int n)
{
   int l=length(a);
   int j=l-1;
   while(j>=0)
   {
   	 a[j+n]=a[j];
   	 j--;
   }
   // cout<<a<<endl;
   j=l;
   for(int i=0;i<n;i++)
   {
   	 a[i]=a[j];
   	 j++;
   }
   // cout<<a<<endl;
   a[l]='\0';
   // cout<<a<<endl;
   return;
}





int main()
{
	char a[1000];
	int n;
	cin>>n;
	cin.ignore();
	cin.getline(a,1000);
	// reverse(a);
	// cout<<a<<endl;
	rotate(a,n);
	cout<<a<<endl;
	return 0;
}