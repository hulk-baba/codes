#include<bits/stdc++.h>
using namespace std;

//declaring structure
struct node{
	int data;
	node *left;
	node *right;
};
//creating a node
node *create(int data){
	node *newNode = new node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

node *insert(node *root, int data){
	node *NN = create(data);
	if(root==NULL)
		return root = NN;
	else if(data <= root->data){
		root->left = insert(root->left,data);
	}
	else {
		root->right = insert(root->right,data);
	}
	return root;
}
int search(node *root, int val){
	if(root == NULL)
		return 0;
	if(root->data == val)
		return 1;
	if(val < root->data){
		return search(root->left,val);
	}
	else
		return search(root->right,val);
}
void preorder(node *root){
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main(){
	node *root = NULL;
	root = insert(root,100);
	root = insert(root,150);
	root = insert(root,5544);
	root = insert(root,10);
	root = insert(root,100);
	preorder(root);
	cout<<"\n";
	int data;
	cin>>data;
	cout<<search(root,data);
	cout<<"\n";
}
