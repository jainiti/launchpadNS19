#include<iostream>
using namespace std;


bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
    	if(n%i==0)
    	{
    		return false;
    	}
    }
    return true;
}

void prime(int no)
{
	for(int i=2;i<=no;i++)
	{
		if(isprime(i))
		{
			cout<<i<<" ";
		}
	}
	return;
}




int main()
{
 
   int n;
   cin>>n;
   prime(n);
   // if(isprime(n))
   // {
   // 	  cout<<"prime"<<endl;
   // }
   // else
   // {
   // 	 cout<<"Not prime"<<endl;
   // }
    

   return 0;
}