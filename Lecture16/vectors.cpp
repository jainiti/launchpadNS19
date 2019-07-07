#include<iostream>
#include<vector>

using namespace std;


bool compare(int a,int b)
{
	return a>b;
}

int main()
{
	vector<int>v1;

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		v1.push_back(i);
	}

	for(int i=0;i<n;i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	v1.pop_back();
	v1.pop_back();
	v1.push_back(10);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	cout<<v1.capacity()<<endl;

	sort(v1.begin(),v1.end(),compare);

	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	return 0;
}








