#include<iostream>
using namespace std;


class Vector
{

public:
	int *arr;
	int cs;
	int ms;

	Vector(int n)
	{
		arr=new int[n];
		cs=0;
		ms=n;
	}


	void push_back(int data)
	{

		if(cs==ms)
		{
			int oldsize=ms;
			int *oldarr=arr;
			ms=2*ms;
			arr=new int[ms];
			for(int i=0;i<oldsize;i++)
			{
				arr[i]=oldarr[i];
			}
			delete []oldarr;

		}

		arr[cs]=data;
		cs++;
	}

	void pop_back()
	{
		if(cs>0)
		{
			cs--;
		}
	}


	int size()
	{
		return cs;
	}

	int capacity()
	{
		return ms;
	}


	bool empty()
	{
		return cs==0;
	}

	int operator[](int i)
	{
		return arr[i];
	}

};


int main()
{
	Vector v(8);
	for(int i=0;i<16;i++)
	{
		v.push_back(i);
	}

	v.pop_back();
	v.pop_back();
	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}

	return 0;
}











