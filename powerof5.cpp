#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll a[1000];
ll ans[1000];
int main(){
	int t;
	cin>>t;
	a[1] = 5;
    int j=1;
	int k=1;
	ans[0] = 5;
	for(int i=2;k<200;i++){
		ans[k++] = pow(5,i);
		a[i] = pow(5,i);
		j=1;
		while(a[j]<pow(5,i)){
			ans[k++] = a[j++] + pow(5,i);
		}
	}
	while(t--){
		int n;
		cin>>n;
		cout<<ans[n-1];
	}
	
	
}
