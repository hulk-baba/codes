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
 
//#define TRACE
 
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

struct node{
	int data;
	int depth;
	node *left;
	node *right;
};

void inorder_traversal(node *root,int code){
	if(root==NULL)
		return;
	inorder_traversal(root->left,code);
    if(code)
	cout<<root->data<<" ";
	inorder_traversal(root->right,code);
}
void swapping(node *root,int cnt){
	queue<node*>qe;
	qe.push(root);
	trace1(root->data);
	while(1){
			node *front = qe.front(); 
			qe.pop();
			trace1(front->data);
			if(front->depth==cnt){
				trace1("matche level");
				node *tmp = front->left;
				front->left = front->right;
				front->right = tmp;
				trace1("swapped");
				
			}
			else if(front->depth > cnt){
				inorder_traversal(root,1);
				break;
			}
			if(front->left)
			qe.push(front->left);
			if(front->right)
			qe.push(front->right);
	}
	queue<node*>q3;
	q3.push(root);
	trace1(root->data);
	while(1){
			node *front = q3.front(); 
			q3.pop();
			trace1(front->data);
			if(front->depth==cnt){
				trace1("matche level");
				node *tmp = front->left;
				front->left = front->right;
				front->right = tmp;
				trace1("swapped");
				
			}
			else if(front->depth > cnt){
				inorder_traversal(root,0);
				break;
			}
			if(front->left)
			q3.push(front->left);
			if(front->right)
			q3.push(front->right);
	}
}
node *create(int data, int depth){
	node *NN = new node();
	NN->data = data;
	NN->depth = depth;
	NN->left = NULL;
	NN->right = NULL;
	return NN;
}
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	node *root = create(1,1);
	queue<node *>q;
	q.push(root);
	trace1(root->data);
	int d=1;
	while(n--){
		node *front = q.front();
		trace1(front->data);
		q.pop();
		d++;
		int a,b;
		cin>>a>>b;
		trace2(a,b);
		if(a!=-1){
			node *l = create(a,d);
			front->left = l;
			q.push(l);
			trace1(l->data);
		}
		else{
			front->left=NULL;
		}
		if(b!=-1){
			node *r = create(b,d);
			front->right = r;
			q.push(r);
			trace1(r->data);
		}
		else{
			front->right=NULL;
		}
		
	}
	int t;
	cin>>t;
	trace1(t);
	while(t--){
		int cnt;
		cin>>cnt;
		trace1(cnt);
		swapping(root,cnt);
        cout<<"\n";
	}
	
}

	

	

