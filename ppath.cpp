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

int prime[9999];

void prime_generator(){
	int c=0;
	repn(i,1000,9999){
		int flag = 1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag = 0;
				break;
			}
			
		}
		if(flag)
		prime[c++] = i; 
	}
// 	rep(i,c)
// 	cout<<prime[i]<<"  ";opn;cout<<c;
    
}
int dig_difference(int n,int m){
	int a = 4;
	int c=0;
	while(a--){
		if(n%10 == m%10)
		c++;
		m/=10;n/=10;
	}
	if(c==3)
	return 1;
	else
	return 0;
}

void bfs(queue<int> &q, vi &vis,int n,vi &dis, int m){
	q.push(n);
	vis[n] = 1;
	int i=0;
	while(!q.empty()){
	    int i=0;
		int x = q.front();
// 		DEBUG(x);
		q.pop();
	   // DEBUG(i);
		while(i<1061){
		  //  DEBUG(prime[i]);
			if(dig_difference(x,prime[i]) && !vis[prime[i]]){
			 //   cout<<"INSIDE QUEUE";DEBUG(prime[i]);
				q.push(prime[i]);
				vis[prime[i]] = 1;
				dis[prime[i]] = dis[x]+1;
				// DEBUG(dis[prime[i]]);
			}
			i++;
		}
	}
	
}
int main(){
	//ios_base::sync_with_stdio(false);
	prime_generator();
	int t;
	ini(t);
	while(t--){
		int n,m;
		ind(n,m);
		queue<int>q;
		vi vis(9999,0);
		vi dis(9999,0);
		bfs(q,vis,n,dis,m);
		cout<<dis[m];
		opn;
	}
//   cout<<prime[1060];
	
	
}

	

	

