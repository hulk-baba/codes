#include<bits/stdc++.h>

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define len(s) s.length()
#define forp(i,a,b) for( i=a;i<=b;i++)
#define rep(i,n)    for( i=0;i<n;i++)
#define ren(i,n)    for( i=n-1;i>=0;i--)
#define forn(i,a,b) for( i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define b(v) v.begin()
#define e(v) v.end()
#define mem(n,m) memset(n,m,sizeof(n))
#define lb lower_bound
#define ub upper_bound
#define pii pair<int,int>
#define pll pair<long long,long long>
#define vii vector<int>
#define vll vector<long long>
#define gl(cin,s)  getline(cin,s);
#define bitc(n) __builtin_popcountll(n)
#define present(s,x) (s.find(x) != s.end()) 
#define cpresent(s,x) (find(all(s),x) != s.end()) 
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

#define boost ios_base::sync_with_stdio(0)
#define MOD 1000000007
#define EPSILON 1e-9
#define PI 3.14159265358979323846
#define SIZE 101

typedef long long  ll;
typedef unsigned long long ull;
typedef long double  ldo;
typedef double  db ;
using namespace std;
int dp[SIZE][3];
int a[SIZE];
int n;
int func(int i,int val)
{
	//cout<<i<<" "<<val<<endl;
	if(i==n){
		if(a[i]==0)
		return 1;
		if(val==0)
		return 0;
		if(val==1){
			if(a[i]==3 or a[i]==2)
			return 0;
			return 1;
		}
		else{
			if(a[i]==3 or a[i]==1)
			return 0;
			return 1;
		}
	}
	if(dp[i][val]!=-1)
	return dp[i][val];
	int ans;
	if(a[i]==0){
		ans=1+func(i+1,0);
	}
	else{
		if(val==0){
			ans=1+func(i+1,0);
			if(a[i]==1 or a[i]==3){
				ans=min(ans,func(i+1,1));
			}
			else if(a[i]==2 or a[i]==3){
				ans=min(ans,func(i+1,2));
			}
		}
		else if(val==1){
			ans=1+func(i+1,0);
			if(a[i]==2 or a[i]==3){
				ans=min(ans,func(i+1,2));
			}
		}
		else{
			ans=1+func(i+1,0);
			if(a[i]==1 or a[i]==3){
				ans=min(ans,func(i+1,1));
			}
		}
	}
	dp[i][val]=ans;
	return ans;
}
int main()
{  	
	/* #ifndef ONLINE_JUDGE
	freopen(fi, "r", stdin);
	#endif */
	//freopen("route.in","r",stdin);
	//freopen("route.out","w",stdout);
	//cin.ignore();
	//cin.clear();
	boost;
	//cin.tie(0);
	int i;
	cin>>n;
	forp(i,1,n){
		cin>>a[i];
	}
	mem(dp,-1);
	cout<<func(1,0)<<endl;
	return 0;
}
