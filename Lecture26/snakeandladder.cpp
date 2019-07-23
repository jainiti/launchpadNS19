#include<iostream>
#include<list>
#include<map>
#include<queue>
#include<climits>

using namespace std;

template<typename T>
class graph
{
	map<T,list<T> >adjlist;

public:

	void addEdge(T u,T v,bool birdir=true)
	{
		adjlist[u].push_back(v);
		if(birdir)
		{
			adjlist[v].push_back(u);
		}
	}

	void print()
	{
		for(auto node:adjlist)
		{
			cout<<node.first<<"-->";
			for(auto children:node.second)
			{
				cout<<children<<" ";
			}
			cout<<endl;
		}
	}

	void bfs(T src)
	{
		queue<T>q;
		map<T,bool>visited;
		q.push(src);
		visited[src]=true;

		while(!q.empty())
		{
			T top=q.front();
			q.pop();
			cout<<top<<" ";
			for(auto child:adjlist[top])
			{
				if(!visited[child])
				{
					q.push(child);
					visited[child]=true;
				}
			}
		}

	}


	int SSSP(T src,T des)
	{
		map<T,int>dist;
		queue<T>q;
		map<T,T>parent;
		for(auto node:adjlist)
		{
			dist[node.first]=INT_MAX;
		}

		q.push(src);
		dist[src]=0;
		parent[src]=src;

		while(!q.empty())
		{
			T top=q.front();
			q.pop();
			for(auto child:adjlist[top])
			{
				if(dist[child]==INT_MAX)
				{
					dist[child]=dist[top]+1;
					q.push(child);
					parent[child]=top;
				}
			}
		}

		for(auto node:dist)
		{
			cout<<node.first<<" "<<node.second<<endl;
		}
		cout<<endl;

		T temp=des;
		while(temp!=src)
		{
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<src<<endl;

		return dist[des];

	}


};

int main()
{
	graph<int>g;

	int board[50] = {0};  
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;  
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for(int u=0;u<=36;u++)
	{
		for(int dice=1;dice<=6;dice++)
		{
			int v=u+dice+board[u+dice];
			g.addEdge(u,v,false);
		}
	}

	cout<<g.SSSP(0,36)<<endl;
	cout<<endl;
	return 0;
}














