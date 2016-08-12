/***** SOLVED BY AKG ****/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int sieve(ll m,ll n){
	bool a[100001];
	fill(a,a+100001,true);
	a[0]=a[1]=false;
	for(ll i=2;i*i<=n;i++){
		if(a[i]==true){
			for(ll j=i*i;j<=n;j+=i)
			a[j]=false;
		}
	}
	ll b[100000];
	ll c=0;
	for(int i=0;i*i<=n;i++){
		if(a[i]==true)
		b[c++]=i;
	}
	bool d[100002];
	fill(d,d+100002,true);
	d[m-0]=false;d[m-1]=false;
	ll p=0;
	for(ll i=b[p];p<c;++p,i=b[p]){
		ll w;
		if(m%i==0||m==1)
		w = 2*i;
		else
		w = (m/i)*i + i;
			for(ll j=w;j<=n;j+=i){
				d[j-m]=false;
			}
	}
	for(ll i=m;i<=n;i++){
		if(d[i-m]==true)
		cout<<i<<" ";
	}
	return 0;		
		
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll m,n;
		scanf("%lld %lld",&m,&n);
		sieve(m,n);
		printf("\n");
	}
	return 0;
}
			
			

