#include<iostream>
#include<list>
#include<map>
#include<queue>
#include<climits>
#include<set>

using namespace std;

template<typename T>
class graph
{
	map<T,list<pair<T,int> > >adjlist;
public:

	void addEdge(T u,T v,int weight,bool birdir=true)
	{
		adjlist[u].push_back(make_pair(v,weight));
		if(birdir)
		{
			adjlist[v].push_back(make_pair(u,weight));
		}
	}


	void print()
	{
		for(auto node:adjlist)
		{
			cout<<node.first<<" ";
			for(auto child:node.second)
			{
				cout<<"("<<child.first<<" "<<child.second<<") ";
			}
			cout<<endl;
		}
	}

	void SSSP(T src)
	{
		map<T,int>dist;
		for(auto node:adjlist)
		{
			dist[node.first]=INT_MAX;
		}
		set<pair<int,T> >s;
		s.insert(make_pair(0,src));
		dist[src]=0;

		while(!s.empty())
		{
			auto p= *(s.begin());
			int parentdistance=p.first;
			T parent=p.second;
			s.erase(s.begin());

			for(auto child:adjlist[parent])
			{
				if(dist[child.first]>parentdistance+child.second)
				{
					auto f=s.find(make_pair(dist[child.first],child.first));
					if(f!=s.end())
					{
						s.erase(f);
					}

					dist[child.first]=parentdistance+child.second;
					s.insert(make_pair(dist[child.first],child.first));
				}

			}
		}


		for(auto node:dist)
		{
			cout<<node.first<<" "<<node.second<<endl;
		}
	}

};


int main()
{
	graph<int>g;
	g.addEdge(0,1,8);
	g.addEdge(0,2,1);
	g.addEdge(0,3,5);
	g.addEdge(1,2,2);
	g.addEdge(2,3,4);
	g.addEdge(1,4,1);
	g.addEdge(2,4,3);

	// g.print();
	g.SSSP(0);
	return 0;
}	