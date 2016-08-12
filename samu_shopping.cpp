#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

int price[100005][4];
int n;
int shop(int pm, int cshop, int pitem){
	if(cshop==n){
		return pm;
	}
	int ans = INT_MAX;
	for(int i=0;i<3;i++){
		if(i!=pitem){
			int t = shop(pm+price[cshop][i],cshop+1, i);
			if(t<ans){
				ans = t;
			}
		}
	}
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
		int ans = shop(0,0,3);
		cout<<ans<<endl;
	}
	return 0;
}

	

	

