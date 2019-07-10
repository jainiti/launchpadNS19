#include<iostream>
#include<queue>
using namespace std;

class stack
{
 public:
 	queue<int>q1;
 	queue<int>q2;

 	void push(int d)
 	{
 		if(q1.empty() && q2.empty())
 		{
 			q1.push(d);
 		}
 		else if(!q1.empty() && q2.empty())
 		{
 			q1.push(d);
 		}
 		else
 		{
 			q2.push(d);
 		}
 	}

 	void pop()
 	{
 		if(q1.empty() && q2.empty())
 		{
 			return;
 		}
 		else if(!q1.empty() && q2.empty())
 		{
 			while(q1.size()>1)
 			{
 				int ele=q1.front();
 				q1.pop();
 				q2.push(ele);
 			}
 			q1.pop();
 		}
 		else
 		{
 			while(q2.size()>1)
 			{
 				int ele=q2.front();
 				q2.pop();
 				q1.push(ele);
 			}
 			q2.pop();
 		}

 	}

 	int top()
 	{
 		if(!q1.empty() && q2.empty())
 		{
 			while(q1.size()>1)
 			{
 				int ele=q1.front();
 				q1.pop();
 				q2.push(ele);
 			}
 			int ans=q1.front();
 			q1.pop();
 			q2.push(ans);
 			return ans;
 		}
 		else
 		{
 			while(q2.size()>1)
 			{
 				int ele=q2.front();
 				q2.pop();
 				q1.push(ele);
 			}
 			int ans=q2.front();
 			q2.pop();
 			q1.push(ans);
 			return ans;
 		}
 	}

 	bool empty()
 	{
 		if(q1.empty() && q2.empty())
 		{
 			return true;
 		}
 		else
 		{
 			return false;
 		}
 	}



};

int main()
{
	stack s;
	for(int i=0;i<6;i++)
	{
		s.push(i);
	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
































