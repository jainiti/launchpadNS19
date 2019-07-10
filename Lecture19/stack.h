#include<iostream>
#include "node.h"
using namespace std;

template <typename T>
class stack      //LIFO( last in first out)
{
public:
	node<T>* head;
	int cs;

	stack()
	{
		head=NULL;
		cs=0;
	}

	void push(T d)
	{
		if(head==NULL)
		{
			node<T>* n=new node<T>(d);
			head=n;
			cs++;
		}
		else
		{
			node<T>* n =new node<T>(d);
			n->next=head;
			head=n;
			cs++;
		}
	}

	void pop()
	{
		if(cs>0)
		{
			node<T>* temp=head;
			head=head->next;
			delete temp;
			cs--;
		}

	}


	T top()
	{
		// if(cs>0)
		// {
			return head->data;
		// }
		
	}

	bool empty()
	{
		return cs==0;
	}

};


// void stack::pop()
// {
// 	if(cs>0)
// 		{
// 			node<T>* temp=head;
// 			head=head->next;
// 			delete temp;
// 			cs--;
// 		}
// }