#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int ways(int n){
	if(n==1 || n==2 || n==3 || n==4)
		return dp[n];
	int q = ways(n-1) + ways(n-3) + ways(n-4);
	dp[n] = q;
	return dp[n];
}

int main(){
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 4;
	int n;
	cin>>n;
	int no_of_ways = ways(n);
	cout<<no_of_ways<<endl;	
}
