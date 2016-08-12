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
 
typedef vector<pair<int,int> > vp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;

stack<int>s;
vi vis(1005,0);

int  dfs(vvi &v,int x){
	s.push(x);
	int c=0;
	while(!s.empty()){
		int x = s.top();
		s.pop();
		if(!vis[x]){
			vis[x] = 1;
			c++;
			tr(v[x],it){
				s.push(*it);
			}
		}
	}
	return c;
}

int main(){
	//ios_base::sync_with_stdio(false);
	int n,d;
	ind(n,d);
	vvi v(n+1);
	while(d--){
		int x,y;
		ind(x,y);
		v[x].pb(y);//directed 
		//v[y].pb(x);//undirected
		
	}
	int ans=n;
	int p;
	repn(i,1,n+1){
		if(!vis[i]){
			p = dfs(v,i);
		}
		if(p<ans)
		ans = p;		
	}
	cout<<ans<<endl;
}


	

	

