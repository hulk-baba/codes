#include<bits/stdc++.h>

using namespace std;

int sqrt(int x){
	int i=1;
	while(i*i<=x){
		i++;	
	}
	return i-1;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<sqrt(n)<<"\n";
	}	
}

