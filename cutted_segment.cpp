#include<bits/stdc++.h>
using namespace std;

int dp[5000];
int min_element(int a,int b, int c){
	int ans = min(a,b);
	ans = min(ans,c);
	return ans;
}
int max_element(int a, int b, int c){
	int ans = max( a, b);
	ans = max(ans,c);
	return ans;
}
int cutted_segment(int n,int x,int y, int z,int mini){
	if(dp[n]){
		return dp[n] ;
	}
	if(n < mini){
		return 0;
	}
	int a = cutted_segment( n-x, x,y,z,mini);
	int b = cutted_segment( n-y,  x,y,z,mini);
	int c = cutted_segment( n-z, x,y,z, mini);
	dp[n] = max_element(a,b,c);
	return dp[n];
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x,y,z; 
		cin>>x>>y>>z;
		int mini = min_element(x, y,z);
		dp[mini] = 1; 
		int ans = cutted_segment(n,x,y,z,mini);
		
	}	
}
