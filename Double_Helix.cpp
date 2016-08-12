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
 
#define TRACE
 
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
typedef priority_queue<pi,vp,greater<pi> > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
vi preA(10004,0);
vi preB(10004,0);
int lower_bound(vi &b,int val){
	
}
int Double_Helix(vi &a,int sta ,int n, vi &b, int stb, int m){
	trace4(sta,n,stb,m);
	int p;
	repn(i,sta,n){
		vector<int>::iterator it = lower_bound(b.begin(),b.end(),4);
		trace1(*it);
		if(it!=b.end()){
			trace1("condition true");
			int j = it-b.begin();
			trace1(j);
			trace4(i+1,n,j+1,m);
			trace1("About to call i+1,n,j+1,m");
			int tmp=Double_Helix(a,i+1,n,b,j+1,m);
			trace1(tmp);
		    p = max(preA[i] + tmp, preB[j] + tmp);
		    trace1(p); 
		}
		else{
			trace1("condition false0");
			p = max(preA[n] - preA[sta-1], preB[m]-preB[stb-1] );
			trace1(p);
		}
	}
	return p;
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t!=0){
		int n=t;
		vi a(10003,0);
		vi b(10003,0);
		rep(i,n) cin>>a[i];
		trace1("A is ");
		rep(i,n) trace1(a[i]);
		int m;
		cin>>m;
		rep(i,m) cin>>b[i];
		trace1("B is ");
		rep(i,m) trace1(b[i]);
		preA[0] = a[0];
		repn(i,1,n){
			preA[i] = preA[i-1] + a[i];
		}
		trace1("preA");
		rep(i,n) trace1(preA[i]);
		preB[0] = b[0];
		repn(i,1,n){
			preB[i] = preB[i-1] + b[i];
		}
		trace1("preB");
		rep(i,m) trace1(preB[i]);
		int ans = Double_Helix(a,0,n,b,0,m);
		cout<<ans<<endl;
		cin>>t;
	}
	
}

	

	

