#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n;i++)
int freq[104];
int main(){
	int n;
	cin>>n;
	int a[34];
	int b[34];
	rep(i,n){
		cin>>a[i]>>b[i];
	}

	rep(i,n){
		rep(j,n){
			if(a[i]==b[j])
				freq[a[i]]++;
		}
	}
	int sum=0;
	for(int i=1;i<=100;i++){
		if(freq[i])
			sum += freq[i];
	}
	cout<<sum<<endl;
}
