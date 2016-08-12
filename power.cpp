#include<bits/stdc++.h>
#define ll long long
using namespace std;	
			
int main(){
	ll n;
	cin>>n;
	ll ldig = n%10;
	n/=10;
	ll sldig =n%10;
	n/=10;
	ll tdig = n%10;
	n/=10;
	ll flast =n%10;
	n/=10;
	ll first = n;
	ll no = first*10000+tdig*1000+ldig*100+sldig*10+flast;
	ll newn = no*no*no*no*no;
	ll ans = newn/10000;
	ans = newn - ans;
	cout<<ans<<endl;  
	return 0;
}

