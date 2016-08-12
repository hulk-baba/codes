//============================================================================
// Name        : Kitchen Timetable
// Author      : Atul Kumar Gupta
// Description : https://www.codechef.com/SNCKQL16/problems/KTTABLE
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


int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	ini(t);
	while(t--){
		int n;ini(n);
		ll a[10005];
		ll t=0;
		rep(i,n){
			cin>>a[i];
			a[i] = a[i] - t;
			t = a[i];
		}
		ll b[10005];
		rep(i,n){
			cin>>b[i];
		}
		int ans = 0;
		rep(i,n){
			if(a[i] >= b[i])
			ans++;
		}
		cout<<ans<<"\n";
	}
	
	
}

	

	

