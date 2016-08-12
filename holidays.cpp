#include<bits/stdc++.h>
using namespace std
#define ll long long

int main(){
	int n;
	cin>>n;
	int min,max;
	int x = n%7;
	if(x>2 and x<6){
		min = (n/7)*2;
		max = (n/7)*2+2;
	}
	if(x<2){
		min = (n/7)*2;
		max = (n/7)*2+x;
	}
	if(x==6){
		min = (n/7)*2+1;
		max = (n/7)*2+2;
	}
	cout<<min<<" "<<max<<endl;
}
	
