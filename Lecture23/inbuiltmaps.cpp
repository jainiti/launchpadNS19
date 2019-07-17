#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
	// unordered_map<string,int>h;
	// h.insert(make_pair("kiwi",100));
	// pair<string,int>p("orange",200);
	// h.insert(p);
	// h["apple"]=390;

	// for(auto node:h)
	// {
	// 	cout<<node.first<<" "<<node.second<<endl;
	// }


	unordered_map<string,vector<int> >h;
	h["kiwi"].push_back(100);
	h["kiwi"].push_back(250);
	h["orange"].push_back(567);
	h["orange"].push_back(789);


	for(auto node:h)
	{
		cout<<node.first<<"-->";
		for(int i=0;i<node.second.size();i++)
		{
			cout<<node.second[i]<<" ";
		}
		cout<<endl;
	}


	return 0;
}