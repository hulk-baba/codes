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
typedef priority_queue<int,vi,greater<int> > minpq;
typedef priority_queue<pi,vp,greater<pi> > mpq;




int main(){
	//ios_base::sync_with_stdio(false);
	string str;
	cin>>str;
	int d[100004];
	int D[100004];
	int n = str.length();
	minpq q[10];
	rep(i,n){
		d[i] = i;
		int val = str[i]-'0';
		q[val].push(i);
	}
	rep(i,n){
		int val = str[i]-'0';
		D[i] = q[val].top();
	}
	rep(i,n){
		DEBUG(d[i]);
		DEBUG(D[i]);
	}
	rep(i,n){
		if(i==0){
			int a = 1 + d[i+1];
			int b = 1 + D[i];
			d[i] = min((min(a,b)),d[i]);
		}
		else if(i==n-1){
			int a = 1+d[i-1];
			int b = 1+D[i];
			d[i] = min((min(a,b)),d[i]);
		}
		else{
			int a = min(d[i-1],d[i+1]) + 1;
			int b = 1+D[i];
			d[i] = min((min(a,b)),d[i]);
		}
		D[i] = d[i];
	}
	cout<<D[n-1]; 
}

	

	

