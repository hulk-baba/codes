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


//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}


//typedef
//------------------------------------------

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
int cache[50][2];
string str0 = "N";
string str1 = "Y";
string p=str0,q=str1;
class BadNeighbors {
public:
    int maxDonations(vi &a) {
        int n = sz(a);
        
        repn(i,1,n){
			//cache[i][0] = max(cache[i-1][1],cache[i-1][0]);
			if(cache[i-1][1] > cache[i-1][0]){
				str0 = q+"N";
				cache[i][0] = cache[i-1][1];
			}
			else{
				str0 = p+"N";
				cache[i][0] = cache[i-1][0];
			}
			cache[i][1] = cache[i-1][0]+a[i];
			str1 = p + "Y";
			p = str0;
			q = str1;
			trace5(i, p,q,cache[i][0], cache[i][1]);
		}
        //return max(cache[n-1][0] , cache[n-1][1]);
        /*if(p[0]!=p[n-1] && q[0] != q[n-1])
        return max(cache[n-1][0],cache[n-1][1]);
        else if(p[0]!=p[n-1] && q[0]==q[n-1]){
			return cache[n-1][0];
		}	
		else if(q[0]!=p[n-1] && p[0] == p[n-1])
		return cache[n-1][1];*/
	    if(p[0]==p[n-1]){
			cache[n-1][0] = cache[n-1][0] - min(a[0],a[n-1]);
		}
		if(q[0]==q[n-1]){
			cache[n-1][1] = cache[n-1][1] - min(a[0],a[n-1]);
		}
		return max(cache[n-1][0],cache[n-1][1]);
    }
    
};
// BEGIN CUT HERE

int main() {
	int n;
	cin>>n;
	vi a;
	rep(i,n){
		int x;
		cin>>x;
		a.pb(x);
	}
	cache[0][0]=0;
	cache[0][1] = a[0];
	BadNeighbors test;
	int ans = test.maxDonations(a);
	cout<<ans; 
}
