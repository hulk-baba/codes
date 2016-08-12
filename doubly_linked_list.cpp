#include<bits/stdc++.h>
using namespace std;

#define TRACE
 
#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
 
#else
 
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)    
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif 
struct node{
	int data;
	node *left;
	node *right;
	
};
node *create(int data){
	node *NN = new node();
	NN->data = data;
	NN->left = NULL;
	NN->right = NULL;
	return NN;
}
node *increase_list(node *root,int data){
	node *NN = create(data);
	trace2("node created during increase_list",NN->data);
	node *head = root;
	while(root->right!=NULL){
		trace2("root->right is not null",root->right->data);
		root = root->right;
	}
	root->right = NN;
	return head;
}

node *insertion_At_Nth(node *root,int pos, int data){
	
}
void print(struct node *root){
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->right;
	}
	cout<<endl; 
}
int main(){
	node *root = create(1);
	trace1(root->data);
	int n;
	cin>>n;
	trace1(n);
	while(n--){
		int data;
		cin>>data;
		trace2(data,n);
		root = increase_list(root,data);
	}
	print(root);
}
