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
#define cpresent(c,x) find(all(c),x) == c.end()
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

void bfs(vvi &G,vi &vis,int st,int en,vi &dis){
	queue<int>q;
	q.push(st);
	vis[st] = 1;
	while(!q.empty()){
		int top = q.front();
		q.pop();
		tr(G[top],it){
			if(!vis[*it]){
				q.push(*it);
				vis[*it] =1;
				dis[*it] = dis[top] + 1;
			}
	  }
		
	}
}

int main(){
	//ios_base::sync_with_stdio(false);
	string str;
	cin>>str;
	int l = str.length();
	vvi G(l);
	G[0].pb(1);
	repn(i,1,l-1){
		G[i].pb(i-1);
		G[i].pb(i+1);
	}
	G[l-1].pb(l-2);
	vvi s(l);
	rep(i,l){
		int a = str[i] - '0';
		s[a].pb(i);
	}
	vector< vector<int> >::iterator row;
	vector<int>::iterator col;
	for (row = s.begin(); row != s.end(); row++) {
		for (col = row->begin(); col != row->end(); col++) {
			if(col+1 != row->end()){
				if(cpresent(G[*col],*(col+1))){
					G[*col].pb(*(col+1));

				}
			}
		}
	}

	
	tr(G,it){
		cout<<it-G.begin()<<":-";
		tr(G[it-G.begin()],p){
			cout<<*p<<"->";
		}
		opn;
	}
	vi vis(l,0);
	vi dis(l,0);
	int en = l-1;
	int st = 0;
	bfs(G,vis,st,en,dis);
	rep(i,l)
	cout<<i<<"->"<<dis[i]<<" ";
	opn;
	cout<<dis[en];
	
}

	

	

