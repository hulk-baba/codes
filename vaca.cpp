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
int fermat(ll n, ll m){
	return mod_exponentiation(n,m-2,m);
}
//Main Starts
//------------------------------------------
//============================================================================
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	int a[103];
	int dp[103];
	dp[0] = 0;
	if(a[0]==0)
	dp[0]=1;
	rep(i,n) cin>>a[i];
	for(int i=1;i<n;i++){
		if(a[i]==0){
			dp[i] = dp[i-1] + 1;
		}
		else if(a[i]==1 &&  a[i-1] == 1){
			dp[i] = dp[i-1] + 1;
		}
		else if(a[i]==2 && a[i]==2)
			dp[i] = dp[i-1] + 1;
		else
			dp[i] = dp[i-1];
	}
	cout<<dp[n-1]<<endl;
	
}

	

	

