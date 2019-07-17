#include<iostream>
using namespace std;

class node
{
public:
	string key;
	int value;
	node* next;

	node(string key,int value)
	{
		this->key=key;
		this->value=value;
		next=NULL;
	}
};


class hashmap
{
	void rehash()
	{
		node** oldbucket=bucket;
		int oldsize=ms;
		ms=2*ms;
		bucket=new node*[ms];
		for(int i=0;i<oldsize;i++)
		{
			node* temp=oldbucket[i];
			while(temp)
			{
				insert(temp->key,temp->value);
				temp=temp->next;
			}

			if(oldbucket[i])
			{
				delete oldbucket[i];
			}
		}

		delete []oldbucket;
	}

public:
	int cs;
	int ms;
	node** bucket;

	hashmap(int n)
	{
		ms=n;
		cs=0;
		bucket=new node*[ms];
		for(int i=0;i<ms;i++)
		{
			bucket[i]=NULL;
		}
	}

	int hashfn(string key)
	{
		int ans=0;
		int mult=37;
		for(int i=0;key[i]!='\0';i++)
		{
			// int data=key[i]*mult;
			// ans+=data;
			ans+=key[i]*mult;
			mult*=37;
			ans%=ms;
			mult%=ms;
		}
		return ans;
	}


	void insert(string key,int value)
	{
		int index=hashfn(key);
		node* temp=bucket[index];
		int flag=0;
		while(temp)
		{
			if(temp->key==key)
			{
				flag=1;
				break;
			}
			temp=temp->next;
		}

		if(flag!=1)
		{
			node* n=new node(key,value);
			n->next=bucket[index];
			bucket[index]=n;
			cs++;

			float loadfactor=cs/(1.0*ms);
			if(loadfactor>0.7)
			{
				rehash();
			}
		}	
	}

	node* search(string key)
	{
		int index=hashfn(key);
		node* temp=bucket[index];
		while(temp)
		{
			if(temp->key==key)
			{
				return temp;
			}
			temp=temp->next;
		}
		return NULL;
	}

	void print()
	{
		for(int i=0;i<ms;i++)
		{
			cout<<i<<"-->";
			node* temp=bucket[i];
			while(temp)
			{
				cout<<temp->key<<" "<<temp->value<<", ";
				temp=temp->next;
			}
			cout<<endl;
		}
	}

	int& operator[](string key)
	{
		node* temp=search(key);
		if(temp==NULL)
		{
			int garbage;
			insert(key,garbage);
			temp=search(key);
			return temp->value;
		}
		else
		{
			return temp->value;
		}
	}


};



int main()
{
	hashmap h(5);
	h.insert("apple",200);
	h.insert("orange",300);
	h.insert("orange",300);
	h["kiwi"]=400; 
	h["orange"]=500; //insertion , updation
	h.print();
	return 0;
}





















































































