#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)


int main(){
	int n;
	while(cin>>n){
		if(n==0)
		break;
		int a[10005];
		rep(i,n) cin>>a[i];
		int ans = INT_MIN;
		int l=0,r=0;
		int sum=0;
		while(l<=r && r<n){
			sum += a[r];
			if(sum>ans){
				ans = sum;
			}
			if(sum<0){
				sum=0;
				l=r;
			}
		
			r++;
		}
		if(ans > 0)
			printf("The maximum winning streak is %d.\n",ans);
		else
			printf("Losing streak.\n");
	}
}
