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

void print(priority_queue<int,vector<int>,comparator> pq)
{
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
}


int main()
{
	int data;
	int k=3;
	priority_queue<int,vector<int>,comparator> pq;
	int count=0; 
	while(1)
	{
		cin>>data;
		if(data==-1)
		{
			print(pq);
		}

		else if(count<k)
		{
			pq.push(data);
			count++;
		}

		else if(count==k)
		{
			if(pq.top()<data)
			{
				pq.pop();
				pq.push(data);
			}
		}
	}

	return 0;
}










