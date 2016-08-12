#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	stringstream ss("123");
	int x;
	ss >> x;
	cout<<x;
}
	while(p--){
		ans = ans + d[j++];
	}
	trace1(ans);
	trace1(j);
	if(j!=(int)d.length()){
		ans = ans+'.';
		trace1(ans);
		trace1(j);
		while(j!=(int)d.length()){
			ans = ans + d[j];
			j++;
		}
		trace1(j);
		trace1(ans);
	}
