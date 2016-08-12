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
#define ff first
#define ss second
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
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pair<int,pi>,vector<pair<int,pi> >,greater<pair<int,pi> > > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}

int a[302][302];
int vis[302][302];
int dis[302][302];
map<int, vp> mp;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,m,p;
	cin>>n>>m>>p;
	repn(i,1,n+1){
		repn(j,1,m+1){
			int tp;
			cin>>tp;
			a[i][j] = tp;
			mp[tp].pb(pi(i,j)); 
		}
	}
	repn(i,1,n+1){
		repn(j,1,m+1){
			vis[i][j] = 0;
			dis[i][j] = 987654321;
		}
	}
	
	mpq q;
	q.push(0,pi(1,1));
	dis[1][1] = 0;
	while(!q.empty()){
		pair<int,pi> w;
		w = q.top();
		q.pop();
		int d = w.ff;
		int x = w.ss.ff;
		int y = w.ss.ss;
		if(d <= dis[x][y]){
			tr(m[a[x][y]+1],it){
				int u = it->ff;
				int v = it->ss;
				vis[u][v] = 1;
				dis[u][v] = abs(u-x) + abs(v-y);
				q.push(dis[u][v],pi(u,v));
			}
		}
		else if(a[x][y]!=1 && !vis[x][y]){
			tr(m[a[x][y]],it){
				int u = it->ff;
				int v = it->ss;
				vis[u][v] = 1;
				dis[u][v] = abs(u-x) + abs(v-y);
				q.push(dis[u][v],pi(u,v));
			}
		}
		
	}
	
}

	

	

