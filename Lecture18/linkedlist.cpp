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

int length(node* head)
{
	int len=0;
	while(head!=NULL)
	{
		len++;
		head=head->next;
	}

	return len;
}


void insertionAtPos(node* &head,node* &tail,int data,int pos)
{
	if(pos==0)
	{
		insertionAtFront(head,tail,data);
	}

	else if(pos>=length(head))
	{
		insertionAtEnd(head,tail,data);
	}
	else
	{
		int p=1;
		node* temp=head;
		while(p<pos)
		{
			temp=temp->next;
			p++;
		}

		node* n=new node(data);
		n->next=temp->next;
		temp->next=n;
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




void deleteAtFront(node* &head,node* &tail)
{
	if(head==NULL)
	{
		return;
	}

	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
		return;
	}


	else
	{
		node* temp=head;
		head=head->next;
		delete temp;
	}

}


void deleteAtEnd(node* &head,node* &tail)
{
	if(head==NULL)
	{
		return;
	}

	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}

	else
	{
		node* n=head;
		while(n->next!=tail)
		{
			n=n->next;
		}

		delete tail;
		n->next=NULL;
		tail=n;
	}
}


void deleteAtPos(node* &head,node* &tail,int pos)
{
	if(pos==0)
	{
		deleteAtFront(head,tail);
		return;
	}

	else if(pos==length(head)-1)
	{
		deleteAtEnd(head,tail);
		return;
	} 

	else if(pos>=length(head))
	{
		return;
	}

	else
	{
		int p=1;
		node* prev=head;
		while(p<pos)
		{
			prev=prev->next;
			p++;
		}

		node* n=prev->next;
		prev->next=n->next;
		delete n;
	}
}


node* search(node* head,int d)
{
	while(head!=NULL)
	{
		if(head->data==d)
		{
			return head;
		}
		head=head->next;
	}

	return NULL;
}

node* searchRec(node* head,int d)
{
	if(head==NULL)
	{
		return NULL;
	}
	else if(head->data==d)
	{
		return head;
	}
	else
	{
		return searchRec(head->next,d);
	}

}


node* mid(node* head)
{
	if(head==NULL)
	{
		return NULL;
	}

	node* slow=head;
	node* fast=head->next;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}

	return slow;
}


node* merge(node* head,node* head1)
{

	if(head==NULL)
	{
		return head1;
	}
	else if(head1==NULL)
	{
		return head;
	}

	node* nhead;
	if(head->data<head1->data)
	{
		nhead=head;
		nhead->next=merge(head->next,head1);
	}
	else
	{
		nhead=head1;
		nhead->next=merge(head,head1->next);
	}

	return nhead;


}


node* mergeSort(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}

	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;

	a=mergeSort(a);
	b=mergeSort(b);

	node* nhead=merge(a,b);
	return nhead;

}


void bubbleSort(node* &head)
{
	int len=length(head);

	node* n;
	node* prev;
	node* curr;
	for(int i=0;i<len-1;i++)
	{
		curr=head;
		prev=NULL;
		while(curr && curr->next)
		{
			n=curr->next;
			//swapping
			if(curr->data > n->data)
			{

				//head shifting
				if(prev==NULL)
				{
					curr->next=n->next;
					n->next=curr;
					prev=n;
					head=n;
				}
				else
				{
					curr->next=n->next;
					n->next=curr;
					prev->next=n;
					prev=n;

				}
			}
			else
			{
				prev=curr;
				curr=curr->next;
			}

		}
	}
}


void reverseLL(node* &head)
{
	node* prev=NULL;
	node* curr=head;
	node* n;
	while(curr)
	{
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
	}
	head=prev;
}


void createCycle(node* &head)
{
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=head->next->next;
}


bool cycleDetect(node* head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next;
		if(fast)
		{
			fast=fast->next;
			slow=slow->next;
			if(fast==slow)
			{
				return true;
			}
		}
	}

	return false;

}


void cycleBreak(node *head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			break;
		}

	}

	node* prev=head;
	while(prev->next!=fast)
	{
		prev=prev->next;
	}

	slow=head;
	while(slow!=fast)
	{
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}

	prev->next=NULL;


}









int main()
{

	node* head=NULL;
	node* tail=NULL;

	node* head1=NULL;
	node* tail1=NULL;



	insertionAtFront(head,tail,7);
	insertionAtFront(head,tail,6);
	insertionAtFront(head,tail,5);
	insertionAtFront(head,tail,4);
	insertionAtFront(head,tail,3);
	insertionAtFront(head,tail,2);
	insertionAtFront(head,tail,1);

	createCycle(head);

	// tail->next=head;

	// if(cycleDetect(head))
	// {
	// 	cout<<"true"<<endl;
	// }
	// else
	// {
	// 	cout<<"No cycle found"<<endl;
	// }


	if(cycleDetect(head))
	{
		cycleBreak(head);
	}

	print(head);

	// insertionAtFront(head,tail,9);
	// insertionAtFront(head,tail,4);
	// insertionAtFront(head,tail,29);
	// insertionAtFront(head,tail,100);

	// print(head);
	// reverseLL(head);
	// print(head);
	// node* nhead=mergeSort(head);
	// print(nhead);

	// bubbleSort(head);
	// print(head);
	// insertionAtFront(head1,tail1,8);
	// insertionAtFront(head1,tail1,5);
	// insertionAtFront(head1,tail1,3);
	// insertionAtFront(head1,tail1,1);


	// insertionAtEnd(head,tail,6);
	// insertionAtEnd(head,tail,7);


	// insertionAtPos(head,tail,1,0);
	// insertionAtPos(head,tail,8,7);
	// insertionAtPos(head,tail,99,1);

	
	// print(head1);

	// node* m=mid(head);
	// if(m!=NULL)
	// {
	// 	cout<<m->data<<endl;	
	// }
	
	// int data;
	// cin>>data;
	// node* s=search(head,data);
	// if(s!=NULL)
	// {
	// 	cout<<"data found"<<endl;
	// }
	// else
	// {
	// 	cout<<"data not found"<<endl;
	// }

	// node* s1=searchRec(head,data);
	// if(s1!=NULL)
	// {
	// 	cout<<"data found"<<endl;
	// }
	// else
	// {
	// 	cout<<"data not found"<<endl;
	// }

	// deleteAtFront(head,tail);
	// deleteAtEnd(head,tail);

	// print(head);

	// deleteAtPos(head,tail,0);
	// print(head);
	// deleteAtPos(head,tail,2);

	// print(head);

	// cout<<length(head)<<endl;

	// node *newHead=merge(head,head1);

	// print(newHead);
	return 0;
}	