/***** SOLVED BY AKG ****/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct node{
	ll maxx;
	ll xxor;
	ll maxxor;
}t[200005];
void build(int n){
	struct node left,right;
	for(int i=n-1;i>0;i--){
		left = t[i<<1];
		right = t[i<<1|1];
		t[i].xxor = left.xxor ^ right.xxor;
		t[i].maxxor = max(max(left.xxor,right.xxor),t[i].xxor);
		t[i].maxx = max(left.maxx, right.maxx); 
	}
}
ll query(int l,int r){
	

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		ll val;
		scanf("%lld",&val);
		t[n+i].maxx = t[n+i].xxor = t[n+i].maxxor = val;
	}
	build(n);
	return 0;
	   
}

