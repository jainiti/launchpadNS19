#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertionAtFront(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node *n=new node(d);
		head=n;
		tail=n;
	}
	else
	{
		node* n=new node(d);
		n->next=head;
		head=n;
	}
}


void insertionAtEnd(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
	}
	else
	{
		node* n=new node(d);
		tail->next=n;
		tail=n;
	}
}


void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}




int main()
{

	node* head=NULL;
	node* tail=NULL;

	insertionAtFront(head,tail,5);
	insertionAtFront(head,tail,4);
	insertionAtFront(head,tail,3);
	insertionAtFront(head,tail,2);
	insertionAtEnd(head,tail,6);
	insertionAtEnd(head,tail,7);

	print(head);
	return 0;
}






