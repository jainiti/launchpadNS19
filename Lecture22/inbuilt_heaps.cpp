#include<iostream>
#include<queue>

using namespace std;

class comparator
{
public:
	bool operator()(int a,int b)
	{
		return a>b;
	}
};

int main()
{
	// priority_queue<int>pq;
	priority_queue<int,vector<int>,comparator> pq;  //min_heap
	int arr[]={4,12,67,89,32,45,90,31,0};
	int n=sizeof(arr)/sizeof(int);

	for(int i=0;i<n;i++)
	{
		pq.push(arr[i]);
	}

	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}

	return 0;
}