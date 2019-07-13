#include<iostream>
#include<queue>
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


node* createTree()
{
	int data;
	cin>>data;

	if(data==-1)
	{
		return NULL;
	}

	node* root=new node(data);
	root->left=createTree();
	root->right=createTree();
	return root;
}

void preoder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	cout<<root->data<<" ";
	preoder(root->left);
	preoder(root->right);
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int count(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int left=count(root->left);
	int right=count(root->right);

	int ans=1+left+right;
	return ans;
}

int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int leftHeight=height(root->left);
	int rightHeight=height(root->right);
	int ans=max(leftHeight,rightHeight)+1;
	return ans;
}


int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int op1=height(root->left)+height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	int ans=max(op1,max(op2,op3));
	return ans;

}


class Pair
{
public:
	int height;
	int diameter;
};


Pair fastDiameter(node* root)
{
	Pair p;
	if(root==NULL)
	{
		p.height=0;
		p.diameter=0;
		return p;
	}

	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	p.height=max(left.height,right.height)+1;
	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;

	p.diameter=max(op1,max(op2,op3));

	return p;
}


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


void mirror(node* root)
{
	if(root==NULL)
	{
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}

int i=0;
int pre[]={8, 10, 1, 6, 4, 7, 3, 14, 13};

node* buildTree(int *in,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}

	int data=pre[i];
	i++;
	node *root=new node(data);

	int k=-1;
	for(int j=s;j<=e;j++)
	{
		if(in[j]==data)
		{
			k=j;
			break;
		}
	}

	root->left=buildTree(in,s,k-1);
	root->right=buildTree(in,k+1,e);
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







int main()
{

	// node* root=createTree();
	// cout<<"preoder traversal :";
	// preorder(root);
	// cout<<endl;
	// cout<<"inorder traversal :";
	// inorder(root);
	// cout<<endl;
	// cout<<"postorder traversal :";
	// postorder(root);
	// cout<<endl;
	// cout<<"No of nodes are :";
	// cout<<count(root)<<endl;
	// cout<<"Height of the tree :";
	// cout<<height(root)<<endl;
	// cout<<"Diameter of tree :";
	// cout<<diameter(root)<<endl;
	// cout<<"fast height :";
	// cout<<fastDiameter(root).height<<endl;
	// cout<<"fast diameter :";
	// cout<<fastDiameter(root).diameter<<endl;
	// cout<<"level order traversal :"<<endl;
	// levelOrderTraversal(root);
	// mirror(root);
	// cout<<"level order traversal after mirroring :"<<endl;
	// levelOrderTraversal(root);

	int in[]={1, 10, 4, 6, 7, 8, 3, 13, 14};
	int n=sizeof(in)/sizeof(int);

	node* root=buildTree(in,0,n-1);
	cout<<"level order traversal :"<<endl;
	levelOrderTraversal(root);

	if(isBST(root))
	{
		cout<<"yes it is BST"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}



















