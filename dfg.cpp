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
//#include <regex>

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
typedef priority_queue<int> pll;
typedef priority_queue<pi,vp,greater<pi> > mpll;

ll gcd(ll a,ll b){
	ll m = min(a,b),ans;
	for(ll i=m;i>0;i--){
		if(a%i==0 && b%i==0){
			ans = i;
			return ans;
		}
	}
	return 1;
}
int form_of_2(ll n){
	while(n){
		if(n%2 == 0){
			n/=2;
		}
		else{
			break;
		}
	}
	while(n!=1){
		if(n%3==0){
			n/=3;
		}
		else{
			break;
		}
	}
	if(n==1)
	return 1;
	else
	return 0;
	
}

int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	ll a[100005];
	rep(i,n)
	cin>>a[i];
	sort(a,a+n);
	ll maxi = a[n-1];
	dg(maxi);
	int flag = 0;
	rep(i,n){
		ll x = gcd(maxi,a[i]);
		dg(a[i]);
		dg(x);
		ll p = a[i] / x;
		dg(p);
		ll ll = maxi/ x;
		dg(ll);
		if(form_of_2(p) && form_of_2(ll))
		continue;
		else{
			flag = 1;
			break;
		}
	}
	if(flag)
	cout<<"No";
	else
	cout<<"Yes";
	
	
}

	

	

