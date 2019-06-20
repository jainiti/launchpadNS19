#include<iostream>
using namespace std;

int main()
{
	char ch;
	int x=0,y=0;
	ch=cin.get();
	while(ch!='$')
	{
		if(ch=='N')
		{
			y++;
		}
		else if(ch=='S')
		{
			y--;
		}
		else if(ch=='E')
		{
			x++;
		}
		else
		{
			x--;
		}
		ch=cin.get();
	}
	// cout<<x<<" "<<y<<endl;
    if(x>=0 && y>=0)
    {
       while(x>0)
       {
	       	 cout<<'E';
	       	 x--;
       }
       while(y>0)
       {
	       	cout<<'N';
	       	y--;
       }
    }
    else if(x<=0 && y>=0)
    {
        while(y>0)
        {
        	cout<<'N';
        	y--;
        }

        x*=-1;

        while(x>0)
        {
        	cout<<'W';
        	x--;
        }
    }
    else if(x<=0 && y<=0)
    {
    	y*=-1;
    	while(y>0)
    	{
    		cout<<'S';
    		y--;
    	}

    	x*=-1;
    	while(x>0)
    	{
    		cout<<'W';
    		x--;
    	}

    }
    else if(x>=0 && y<=0)
    {
        while(x>0)
        {
        	cout<<'E';
        	x--;
        }

        y*=-1;
        while(y>0)
        {
        	cout<<'S';
        	y--;
        }
    }
    cout<<endl;
	return 0;
}