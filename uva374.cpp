#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll mod_exponentiation(ll base, ll n, ll m){
	if(base ==0 )
		return 0;
	if( n==0)
		return 1%m;
	ll half = mod_exponentiation(base, n/2, m);
	if(n%2==0)
		return (half%m*half%m)%m;
	else
		return ((half%m*half%m)%m*(base%m))%m;
}
int main(){
	ll b,p,m;
	int t;
	cin>>t;
	while(t--){
		cin>>b>>p>>m;
		
		cout<<mod_exponentiation(b,p,m)<<endl;
	}
}
