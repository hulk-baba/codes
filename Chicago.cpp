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
#include <iomanip>
//#include <regex>

using namespace std;


#define eps 1e-6
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
typedef pair<double,int> pf;
typedef vector<pi> vp;
typedef vector<pf> vf;
typedef vector<vf> vvf;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;
typedef priority_queue<pf> pq;
typedef priority_queue<pf,vf,greater<pi> > mpq;


void print_double(double x) 
{
    int n = x; 
    x = x - n;
    x = x*1000000;
    printf("%d.%06d",n,(int)x);
}

int main(){
	//ios_base::sync_with_stdio(false);
	int c;
	cin>>c;
	do{
		int n,m;
		ini(m);
		n = c;
		vvf G(n+1);
		while(m--){
			int a,b,p;
			ini(a);ini(b);ini(p);
			double c = (double)p/100.0;
			G[a].pb(pf(c,b));
			G[b].pb(pf(c,a));
			
		}
// 		tr(G,it){
// 		    tr(G[it-G.begin()],bg){
// 		       cout<< bg->first << " " <<bg->second;
// 		       opn;
// 		    }
// 		    opn;opn;
// 		}
		vector<double>PROB(102,-1.0);
		pq q;
		PROB[1] = 1.0;
		q.push(pf(1.0,1));
		
		while(!q.empty()){
			pf x = q.top();
			q.pop();
			int vertex1 = x.second;
			double cost1 = x.first;
// 			cout<<"cost1:-> "<<cost1;opn;
// 			DEBUG(vertex1);
// 			cout<<"PROB[vertex1]:-> "<<PROB[vertex1];opn;
			if((PROB[vertex1]-cost1) <= 0){
			 //   cout<<"fcd";
				tr(G[vertex1],it){
					int vertex2 = it->second;
				// 	DEBUG(vertex2);
					double cost2 = it->first;
				// 	cout<<"cost2:-> "<<cost2;opn;
				// 	cout<<"PROB[vertex2]:-> "<<PROB[vertex2];opn;
					if((PROB[vertex2] - PROB[vertex1]*cost2)< 0 ){
					   // cout<<"fuckoff"<<endl;
						PROB[vertex2] = PROB[vertex1]*cost2;
						q.push(pf(PROB[vertex2],vertex2));
				// 		cout<<"PROB[vertex2]:-> "<<PROB[vertex2];opn;
						
					}
				// 	opn;
				}
			}
// 			opn;
		}
	    cout<<fixed<<setprecision(6)<<PROB[n]*100;
	    cout<<" "<<"percent";
    	cin>>c;
	    opn;

		
	}while(c!=0);
	
	
}

	

	

