//============================================================================
// Name        : 
// Author      : Atul Kumar Gupta
// Description : 
// Status	   : AC
//============================================================================

#include <bits/stdc++.h>

using namespace std;

#define dg(x) cout << '>' << #x << ':' << x << endl;
#define sz(c)  (int) c.size()
#define all(c) c.begin(), c.end()
#define tr(container,it) for(__typeof(container.begin()) it = container.begin();it != container.end(); it++)
#define pii pair<int,int>
#define present(s,x) s.find(x) != s.end()
#define cpresent(c,x) find(all(c),x) != c.end()
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define dep(i,n) for(int i=n-1;i>=0;i--)
#define repn(i,a,b) for(int i=a; i<b;i++)
#define ini(n) scanf("%d",&n)
#define ioa(n,a) { ini(n); rep(i,n) ini(a[i]) ;}
#define ind(n,m) scanf("%d %d",&n,&m);
#define inl(n) scanf("%l64d",&n)
#define ins(n) scanf("%s",n);
#define ina(n) cin>>n
#define opi(n) printf("%d",n)
#define opl(n) printf("%l64d",n)
#define ops(n) printf("%s",n)
#define opn printf("\n")
#define opsp printf(" ");
#define opa(n) cout<<n
 
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

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
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
void preorder(node *root){
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder_traversal(node *root){
	if(root==NULL)
		return;
	
	inorder_traversal(root->left);
	trace1(root->data);
	cout<<root->data<<" ";
	inorder_traversal(root->right);
}
void diagonals(node *root){
	if(root == NULL)
	return;
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node *front = q.front();
		q.pop();
		int sum=0;
		while(front!=NULL){
			node *l = front->left;
			if(l){
				q.push(l);
			}
			sum += front->data;
			front = front->right;
			
		}
		cout<<sum<<endl;
	}
}
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	node *root = create(1);
	//trace1(root->data);
	node *node2 = create(2);
	//trace1(node2->data);
	node *node3 = create(3);
	node *node5 = create(5);
	node *node6 = create(6);
	node *node4 = create(4);
	//trace1(node4->data);
	node *node7 = create(7);
	node *node9 = create(9);
	node *node10 = create(10);
	node *node11 = create(11);
	//trace1(node11->data);
	node *node12 = create(12);
	root->left = node2;
	root->right = node3;
	node2->left = node9;
	node2->right = node6;
	//trace1(node2->right->data);
	node3->left = node4;
	node3->right = node5;
	node9->right = node10;
	node6->left = node11;
	node4->left = node12;
	node4->right = node7;
	inorder_traversal(root);
	diagonals(root);
}
	

	

