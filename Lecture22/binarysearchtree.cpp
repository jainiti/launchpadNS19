#include<iostream>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};



void levelOrderTraversal(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		node* top=q.front();
		q.pop();

		if(top==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<top->data<<" ";
			if(top->left)
			{
				q.push(top->left);
			}
			if(top->right)
			{
				q.push(top->right);
			}
		}

	}
}



node* insertInBST(node* root,int d)
{
	if(root==NULL)
	{
		root=new node(d);
		return root;
	}

	if(d<=root->data)
	{
		root->left=insertInBST(root->left,d);
	}
	else
	{
		root->right=insertInBST(root->right,d);
	}
	return root;
}


node* arrToBST(int *arr,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}

	int mid=(s+e)/2;
    node* root=new node(arr[mid]);
    root->left=arrToBST(arr,s,mid-1);
    root->right=arrToBST(arr,mid+1,e);

    return root;

}





node* buildBST()
{
	int data;
	cin>>data;
	node* root=NULL;
	while(data!=-1)
	{
		root=insertInBST(root,data);
		cin>>data;
	}

	return root;
}


bool isBST(node* root,int min=INT_MIN,int max=INT_MAX)
{
	if(root==NULL)
	{
		return true;
	}

	if(min<=root->data && root->data<max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max))
	{
		return true;
	}
	return false;
}


class Pair
{
	public:
		bool balanced;
		int height;
};


Pair isBalanced(node* root)
{
	Pair p;
	if(root==NULL)
	{
		p.balanced=true;
		p.height=0;
		return p;
	}

	Pair left=isBalanced(root->left);
	Pair right=isBalanced(root->right);

	p.height=max(left.height,right.height)+1;
	if(left.balanced && right.balanced && abs(left.height-right.height)<=1)
	{
		p.balanced=true;
	}
	else
	{
		p.balanced=false;
	}

	return p;

}


node* levelOrderInput()
{
	int data;
	cin>>data;
	int c1,c2;
	node* root=NULL;
	if(data==-1)
	{
		return NULL;
	}

	root=new node(data);
	queue<node*>q;
	q.push(root);

	while(!q.empty())
	{
		node* top=q.front();
		q.pop();

		cout<<"enter children of "<<top->data<<endl;
		cin>>c1>>c2;

		if(c1!=-1)
		{
			top->left=new node(c1);
			q.push(top->left);

		}

		if(c2!=-1)
		{
			top->right=new node(c2);
			q.push(top->right);
		}
	}

	return root;
}



class linkedList
{
public:
	node* head;
	node* tail;
	linkedList()
	{
		head=NULL;
		tail=NULL;
	}
};


linkedList bstToLL(node* root)
{
	linkedList l;
	if(root==NULL)
	{
		l.head=NULL;
		l.tail=NULL;
		return l;
	}

	else if(root->left==NULL && root->right==NULL)
	{
		l.head=root;
		l.tail=root;
		return l;
	}

	else if(root->left && root->right==NULL)
	{
		linkedList left=bstToLL(root->left);
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
	else if(root->left==NULL && root->right)
	{
		linkedList right=bstToLL(root->right);
		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		return l;
	}

	else
	{
		linkedList left=bstToLL(root->left);
		linkedList right=bstToLL(root->right);
		left.tail->right=root;
		root->right=right.head;
		l.head=left.head;
		l.tail=right.tail;
		return l;	
	}
}


void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->right;
	}
}











int main()
{
	// node* root=buildBST();
	// int arr[]={1,2,3,4,5,6,7,8,9};
	// int n=sizeof(arr)/sizeof(int);
	// node* root=arrToBST(arr,0,n-1);

	node* root=levelOrderInput();
	linkedList l=bstToLL(root);
	print(l.head);
	// cout<<"levelOrderTraversal :"<<endl;
	// levelOrderTraversal(root);
	// if(isBST(root))
	// {
	// 	cout<<"yes it is BST"<<endl;
	// }
	// else
	// {
	// 	cout<<"No"<<endl;
	// }
	// if(isBalanced(root).balanced)
	// {
	// 	cout<<"balanced"<<endl;
	// }
	// else
	// {
	// 	cout<<"unbalanced"<<endl;
	// }
	return 0;
}
