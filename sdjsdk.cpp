#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <regex>

using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
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
 
typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;


vi cat(100004,0);
vi vis(100004,0);
vi cons(100004,0);
queue<int>q;
int bfs(vvi &v,int i, int m){
	q.push(i);
	int ans = 0;
	vis[i] = 1;
	cons[1] = 0;
	if(cat[i] == 1)
		 cons[i] = 1;
	while(!q.empty()){
		int x = q.front();
	//	DEBUG(x);
		q.pop();
		 if(sz(v[x])==1)
		 ans++;
		 tr(v[x],it){
			if(!vis[*it]){
				vis[*it] = 1;
				if(cat[*it] == 1){
					cons[*it] = cons[x] + 1;
					if(cons[*it]<=m){
						q.push(*it);
					}
				}
				else{
					cons[*it] = 0;
					q.push(*it);
				}
			}
		
		}
	}
	return ans;
}

int main(){
	//ios_base::sync_with_stdio(false);
	int n,m;
	ind(n,m);
	repn(i,1,n+1){
		ini(cat[i]);
	}
	//repn(i,1,n+1)
	//cout<<cat[i]<<" ";opn;
	vvi v(n+1);
	repn(i,1,n){
		int a,b;
		ind(a,b);
		v[a].pb(b);
		v[b].pb(a);
	}
	cout<<bfs(v,1,m)<<endl;
	
	
}

	

	

