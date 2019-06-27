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



void append(char *a,char *b)
{
	int l1=length(a);
	int l2=length(b);
	for(int j=0;j<=l2;j++)
	{
		a[l1+j]=b[j];
	}
	return;
}

void copy(char *res,char *a)
{
	int l1=length(a);
	for(int j=0;j<=l1;j++)
	{
		res[j]=a[j];
	}
	return;
}










int main()
{
    char a[1000],b[1000];
    int n;
    cin>>n;
    cin.ignore();
    int maxlen=0;
    char res[1000];
    for(int i=0;i<n;i++)
    {
 		cin.getline(a,1000);
 		if(maxlen<length(a))
 		{
 			maxlen=length(a);
 			copy(res,a);
 		}
    }

    cout<<res<<" "<<maxlen<<endl;
    // cin.getline(a,1000);
    // cin.getline(b,1000);
    // append(a,b);
    // char res[1000];
    // copy(res,a);
    // cout<<res<<endl;
	return 0;
}













