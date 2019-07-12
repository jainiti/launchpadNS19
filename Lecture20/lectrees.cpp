#include<iostream>
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







int main()
{

	node* root=createTree();
	cout<<"preoder traversal :";
	preorder(root);
	cout<<endl;
	cout<<"inorder traversal :";
	inorder(root);
	cout<<endl;
	cout<<"postorder traversal :";
	postorder(root);
	cout<<endl;
	cout<<"No of nodes are :";
	cout<<count(root)<<endl;
	cout<<"Height of the tree :";
	cout<<height(root)<<endl;
	cout<<"Diameter of tree :";
	cout<<diameter(root)<<endl;
	return 0;
}











