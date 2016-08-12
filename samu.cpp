#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define dg(x) cout << '>' << #x << ':' << x << endl;
#define sz(c)  (int) c.size()
#define all(c) c.begin(), c.end()
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


int dp[100005][4];
int n;
int price[100005][4];
int shop(int cshop, int pitem){
	if(cshop==n){
		return 0;
	}
	if(dp[cshop][pitem]!=-1)
		return dp[cshop][pitem];
	int ans = INT_MAX;
	for(int i=0;i<3;i++){
		if(i!=pitem){
			ans = min(ans, price[cshop][i]+shop(cshop+1,i));
		}
	}
	dp[cshop][pitem] = ans;
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		rep(i,n){
			rep(j,3){
				cin>>price[i][j];
			}
		}
		rep(i,100005){
			rep(j,4)
				dp[i][j] = -1;
		}
		int ans = shop(0,3);
		cout<<ans<<endl;
	}
	
}

	

	

