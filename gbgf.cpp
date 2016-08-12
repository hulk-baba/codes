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

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
ll fast_pow(ll base, ll n,ll M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    ll halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ll findMMI_fermat(ll n,ll M)
{
    return fast_pow(n,M-2,M);
}
ll an_mod(ll a, ll n, ll MOD){
	ll ans=1;
	while(n !=0 ) {
		if(n%2 == 1) {           //as if b%2 == 1,means last /rightmost digit of b in binary form is 1.   
		  ans = ans*a ; 
		  ans = ans%MOD;      //at each iteration if value of ans exceeds then reduce it to modulo c. 
	   }
	   a = a*a;                  // This is explained below
	   a %= MOD;                   //at each iteration if value of a exceeds then reduce it to modulo c. 
	   n /= 2;                   //Trim the right-most digit of b in binary form.
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll MOD=1000000007;
	ll A,B,x,n;
	cin>>A>>B>>n>>x;
	trace4(A,B,x,n);
	if(A !=1 ){
		ll den = (A-1);
		ll mmi_den = findMMI_fermat(den,MOD);
		trace1(den);
		trace1(mmi_den);
		ll ans = an_mod(A,n,MOD);
		trace1(ans);
		ll f1ans = (ans * (x%MOD))%MOD;
		trace1(f1ans);
		ll f2ans = (ans - 1 + MOD)%MOD;
		trace1(f2ans);
		ll f3ans = ((B % MOD) * (f2ans))%MOD;
		trace1(f3ans);
		ll f4ans = (f3ans * mmi_den)%MOD;
		trace1(f4ans);
		ll ul = (f1ans + f4ans) % MOD;
		trace1(ul);
		cout<<ul;opn;
	}
	else{
		cout<<((x%MOD) + ((B%MOD)*(n%MOD))%MOD)%MOD;opn;
	}
	
}

	

	

