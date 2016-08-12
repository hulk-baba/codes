#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100001];
ll b[100001];

int Final(ll m,ll x){
	ll j =x;
	ll den=1;
	ll num=1;
	ll w=m;
	ll y=1;
	ll ans = 1;
	for(ll i=1;i<=x;i++){
		ans += a[j]*num/den;
		num=num*w++;
		den = den*y++;
}
	cout<<ans<<endl;
	return 0;
}
		
	
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n,x,m;
		scanf("%lld %lld %lld",&n,&x,&m);
		for(ll i=1;i<=n;i++)
		scanf("%lld",a+i);
		Final(m,x);
	}
	return 0;
}
		
