//============================================================================
// Name        : 
// Author      : Atul Kumar Gupta
// Description : 
// Status	   : AC
//============================================================================

#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
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
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<int, vi , greater<int> >minpq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

//Euclidean GCD
//------------------------------------------
//============================================================================
int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
//Fermat MMI
//------------------------------------------
//============================================================================
//a^n % m
int mod_exponentiation(ll base, ll n, ll m){
	if( n==0)
		return 1;
	if( n==1)
		return base%m;
	ll half = mod_exponentiation(base, n/2, m);
	if(!n&0)
		return (half%m*half%m)%m;
	else
		return ((half%m*half%m)*(base%m))%m;
}
int MMI(ll n, ll m){
	return mod_exponentiation(n,m-2,m);
}

int factorial[100005];
//Main Starts
//------------------------------------------
//============================================================================
void factorial_cal(){
	factorial[0] = 1;
	factorial[1] = 1;
	repn(i,2,100005){
		factorial[i] = (i*factorial[i-1])%mod;
	}
}
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	factorial_cal();
	while(t--){
		int k,m;
		cin>>k>>m;
		trace2(k,m);
		int a[1003];
		rep(i,k) cin>>a[i];
		int sum=0;
		rep(i,k) sum+=a[i];
		trace1(sum);
		if(sum>m){
			trace1("if cond is true");
			cout<<"0"<<endl;
			continue;
		}
		int left = m-sum;
		trace1(left);
		trace1(k-1);
		int num = factorial[left-k-1];
		trace1(num);
		int den = (factorial[k-1] * factorial[left])%mod;
		trace1(den);
		int y2 = MMI(den,mod);
		trace1(y2);
		int ans = (num*y2)%mod;
		trace1(ans);
		cout<<ans<<endl;
	}
	return 0;
}

	

	

