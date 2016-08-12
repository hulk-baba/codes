#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[204];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		bool flag = false;
		for(int i=0;i<n;i++){
			int re = x-a[i];
			bool ans = binary_search(a+i+1,a+n,re);
			if(ans){
				cout<<"Yes"<<endl;
				flag = true;
				break;
			}
		}
		if(flag)
		continue;
		cout<<"No"<<endl;
	}
}
