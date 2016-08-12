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
#define trace1(x)                cout << #x << ": " << x << endl;
#define trace2(x, y)             cout << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cout << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
 
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
typedef priority_queue<int , vi, greater<int> > mpq;

#include<bits/stdc++.h>
using namespace std;

int dp[200000];
int cut_rope(int n, int v[]){
	trace1("inside cutrope");
	trace1(n);
	if(n==0)
		return 1;
	if(n==v[0])
		return 1;
	else if(n<v[0])
		return 0;
    else if(dp[n]!=-1)
		return dp[n];
	int p=0;
	rep(i,3){
		int tmp=0;
		int q;
		trace2(n,v[i]);
		//cout<<"About to call cut_rope n-v[i] : "<<n-v[i]<<endl;
		if(n>=v[i] && (q=cut_rope(n-v[i],v))!=0){
			trace3(n,v[i],n-v[i]);
			//cout<<"About to call cut_rope v[i]"<<endl;
			if(n!=v[i])
				tmp = cut_rope(v[i],v) + q;
			else 
				tmp = 1;
			p = max(p,tmp);
			trace2(tmp,p);
		}

			
	}
	dp[n] = p;
	trace2(n,dp[n]);
	return dp[n];
}

int main(){
	int t;
	cin>>t;
	trace1(t);
	while(t--){
		int n;
		cin>>n;
	    int v[3];
		int x,y,z;
		cin>>x>>y>>z;
		trace3(x,y,z);
		fill(dp,dp+200000,-1);
		v[0] = x;v[1] = y; v[2] = z;
		sort(v,v+3);
		dp[v[0]] = 1;
		rep(i,3) trace1(v[i]);
		int ans = cut_rope(n,v);
		cout<<ans<<endl;
	}	
}
