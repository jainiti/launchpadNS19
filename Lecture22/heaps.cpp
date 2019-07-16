#include<iostream>
#include<vector>
using namespace std;

class minHeap
{

	void heapify(int index)
	{
		int left=2*index;
		int right=2*index+1;

		int min_index=index;
		if(left<v.size() && v[left]<v[min_index])
		{
			min_index=left;
		}

		if(right<v.size() && v[right]<v[min_index])
		{
			min_index=right;
		}
		if(index!=min_index)
		{
			swap(v[index],v[min_index]);
			heapify(min_index);
		}
	}

public:
	vector<int>v;
	minHeap()
	{
		v.push_back(-1);
	}

	void push(int d)
	{
		v.push_back(d);
		int index=v.size()-1;
		int parent =index/2;

		while(index>1 && v[parent]>v[index])
		{
			swap(v[parent],v[index]);
			index=parent;
			parent=index/2;
		}
	}

	void pop()
	{
		int index=v.size()-1;
		swap(v[1],v[index]);
		v.pop_back();
		heapify(1);
	}

	int top()
	{
		return v[1];
	}

	bool empty()
	{
		return v.size()==1;
	}

};


int main()
{
	int arr[]={4,12,67,89,32,45,90,31,0};
	int n=sizeof(arr)/sizeof(int);
	minHeap h;
	for(int i=0;i<n;i++)
	{
		h.push(arr[i]);
	}
	while(!h.empty())
	{
		cout<<h.top()<<" ";
		h.pop();
	}
	return 0;
}











