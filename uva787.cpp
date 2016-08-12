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


ll a[105];
ll prefix[105];
ll MAX(ll a, ll b, ll c){
	ll max1 = max(a,b);
	return max(max1,c);
}
ll MIN(ll a, ll b, ll c){
	ll min1 = min(a,b);
	return min(min1,c);
}
ll answer(int i){
	ll curr_min = a[0];
	ll curr_max = a[0];
	ll prev_max = a[0];
	ll prev_min = a[0];
	ll ans = a[0];
	repn(j,1,i){
		curr_max = MAX(prev_max * a[j], prev_min*a[j], a[j]);
		curr_min = MIN(prev_max * a[j], prev_min*a[j], a[j]);
		ans = max(ans,curr_max);
		prev_max = curr_max;
		prev_min = curr_min;
	}
	return ans;
	
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll x;
	while(cin>>x){
		fill(a,a+102,0);
		int i=1;
		a[i++] = x;
		while(cin>>x ){
			if(x!= -999999){
				a[i++] = x;
			}
			else
				break;
		}
		cout<<answer(i)<<endl;
		
	}
	
}

	

	

