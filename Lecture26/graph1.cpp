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


	void SSSP(T src,T des)
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

		// for(auto node:dist)
		// {
		// 	cout<<node.first<<" "<<node.second<<endl;
		// }

		T temp=des;
		while(temp!=src)
		{
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<src<<endl;

	}


};

int main()
{

	// graph<string>g;

	graph<int>g;
	// g.addEdge("modi","yogi",false);
	// g.addEdge("modi","trump",false);
	// g.addEdge("prabhu","modi",false);
	// g.addEdge("trump","modi",false);
	// g.addEdge("yogi","modi",false);
	// g.addEdge("yogi","prabhu",false);
	// g.addEdge("putin","trump",false);
	// g.addEdge("putin","modi",false);
	// g.addEdge("putin","pope");

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,5);
	// g.print();
	// g.bfs(0);
	g.SSSP(0,5);
	cout<<endl;
	return 0;
}














