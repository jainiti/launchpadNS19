#include<iostream>
using namespace std;

bool isSafeToPut(int sol[][10],int i,int j,int n)
{

	for(int k=0;k<n;k++)
	{
		if(sol[k][j] || sol[i][k])
		{
			return false;
		}
	}


    int k=i,l=j;

    while(k>=0 && l>=0)
    {
    	if(sol[k][l])
    	{
    		return false;
    	}
    	k--;
    	l--;
    }

    k=i;l=j;

    while(k>=0 && l<n)
    {
    	if(sol[k][l])
    	{
    		return false;
    	}

    	k--;
    	l++;
    }
    
    return true;

}


bool nqueen(int n,int i,int sol[][10])
{
   //base case
	if(i==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}


	for(int j=0;j<n;j++)
	{
		if(isSafeToPut(sol,i,j,n))
		{
			sol[i][j]=1;
			bool kyaAageRakhPaye=nqueen(n,i+1,sol);
			if(kyaAageRakhPaye)
			{
				return true;
			}
			sol[i][j]=0;
		}
	}
	return false;

}


int main()
{
	int n;
	cin>>n;
	int sol[10][10]={0};
	nqueen(n,0,sol);
	cout<<endl;
	return 0;
}







