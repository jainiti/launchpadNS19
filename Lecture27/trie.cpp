#include<iostream>
#include<unordered_map>
using namespace std;

class node
{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*>h;

	node(char c)
	{
		ch=c;
		isterminal=false;
	}

};



class trie
{
	node* root;
public:
	trie()
	{
		root =new node('\0');
	}

	void addWord(char *word)
	{
		node* temp=root;
		for(int i=0;word[i]!='\0';i++)
		{
			char c=word[i];
			if(temp->h.count(c)==0)
			{
				node* n=new node(c);
				temp->h[c]=n;
				temp=temp->h[c];
			}
			else
			{
				temp=temp->h[c];
			}
		}
		temp->isterminal=true;
	}

	bool search(char *word)
	{
		node* temp=root;
		for(int i=0;word[i]!='\0';i++)
		{
			char c=word[i];
			if(temp->h.count(c)==0)
			{
				return false;
			}
			else
			{
				temp=temp->h[c];
			}
		}

		return temp->isterminal;
	}
};


int main()
{
	trie t;
	t.addWord("hey");
	t.addWord("heythere");
	t.addWord("hello");
	t.addWord("coding");
	t.addWord("apple");
	t.addWord("hell");

	while(1)
	{
		char ch[1000];
		cin>>ch;

		if(t.search(ch))
		{
			cout<<"exists"<<endl;
		}
		else
		{
			cout<<"does not exists"<<endl;
		}
	}
	return 0;
}
































