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
#define cond(x,c) x+c >= 1 && x+c<=8
#define ap append

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

int vis[9][9];
queue<pi> q;
string path[9][9];
int dist[9][9];

void bfs(int x1, int y1, int x2, int y2){
	q.push(pi(x1,y1));
	vis[x1][y1] = 1;
	dist[x1][y1] = 0;
	while(!q.empty()){
		pi p = q.front();
		q.pop();
		int v1 = p.first;
		int v2 = p.second;
// 		dg(v1);dg(v2);
// 		if(v1==x2 && v2==y2)
// 		break;
		int a = v1-1,b=v1+1,c=v2-1,d=v2+1;
// 		dg(a);
		if(a>=1){
		  //  cout<<"Inside a>=1";opn;
			if(!vis[a][v2]){
			 //   cout<<"INSIDE";
			 //   printf("(%d,%d)",a,v2);
				q.push(pi(a,v2));
				vis[a][v2] = 1;
				dist[a][v2] = dist[v1][v2] + 1;
				path[a][v2]=path[v1][v2]+"L ";
				// 	printf("for (%d,%d)",a,v1);
				// cout<<"TILL NOW :->"<<path[a][v2];opn;

			}

			if(c>=1){
				if(!vis[a][c]){
					q.push(pi(a,c));
					vis[a][c]=1;
					dist[a][c] = dist[v1][v2] + 1;
					path[a][c]=path[v1][v2]+"LD ";
				// 		printf("for (%d,%d)",a,v1);
				// 	cout<<"TILL NOW :->"<<path[a][c];opn;
				}
			}
			if(d<=8){
				if(!vis[a][d]){
					q.push(pi(a,d));
					vis[a][d]=1;
					dist[a][d] = dist[v1][v2] + 1;
					path[a][d]=path[v1][v2]+"LU ";
				// 		printf("for (%d,%d)",a,v1);
				// 	cout<<"TILL NOW :->"<<path[a][d];opn;
				}
			}
		}
		if(b<=8){
		  //  cout<<"INSIDE b<=8";opn;
			if(!vis[b][v2]){
				q.push(pi(b,v2));
				vis[b][v2] = 1;
				dist[b][v2] = dist[v1][v2] + 1;
				path[b][v2]=path[v1][v2]+"R ";
				// 	printf("for (%d,%d)",a,v1);
				// cout<<"TILL NOW :->"<<path[b][v2];opn;
			}
			if(c>=1){
				if(!vis[b][c]){
					q.push(pi(b,c));
					vis[b][c] =1;
					dist[b][c] = dist[v1][v2] + 1;
					path[b][c]= path[v1][v2]+"RD ";
				// 		printf("for (%d,%d)",b,c);
				// 	cout<<"TILL NOW :->"<<path[b][c];opn;
				}
			}
			if(d<=8){
				if(!vis[b][d]){
					q.push(pi(b,d));
					vis[b][d] = 1;
					dist[b][d] = dist[v1][v2] + 1;
					path[b][d]=path[v1][v2]+"RU ";
				// 	printf("for (%d,%d)",b,d);
				// 	cout<<"TILL NOW :->"<<path[b][d];opn;
				}
			}
		}
		if(c>=1){
		  //  cout<<"INSIDE c>=1";opn;
			if(!vis[v1][c]){
				q.push(pi(v1,c));
				vis[v1][c] = 1;
				dist[v1][c] = dist[v1][v2] + 1;
				path[v1][c]=path[v1][v2]+"D ";
				// printf("for (%d,%d)",v1,c);
				// cout<<"TILL NOW :->"<<path[v1][c];opn;
			}
		}
		if(d<=8){
		  //  cout<<"INSIDE d<=8";opn;
			if(!vis[v1][d]){
				q.push(pi(v1,d));
				vis[v1][d] = 1;
				dist[v1][d] = dist[v1][v2] + 1;
				path[v1][d]=path[v1][v2]+"U " ;
				// 	printf("for (%d,%d)",v1,d);
				// cout<<"TILL NOW :->"<<path[v1][d];opn;
			}
		}
	}
	cout<<dist[x2][y2]<<endl;
// 	cout<<path[x2][y2].length();
	rep(i,(int)path[x2][y2].length()){
		if(path[x2][y2][i] == ' ')
		cout<<"\n";
		else
		cout<<path[x2][y2][i];
	}
}

int main(){
	//ios_base::sync_with_stdio(false);
	string s,t;
	cin>>s>>t;
	int x1 = s[0] - 'a' + 1;
	int y1 = s[1] - '0';
	int x2 = t[0] - 'a' + 1;
	int y2 = t[1] - '0';
// 	dg(x1);dg(x2);dg(y1);dg(y2);
	repn(i,1,9){
		repn(j,1,9){
			path[i][j]= "";
		}
	}
	bfs(x1,y1,x2,y2);



}
