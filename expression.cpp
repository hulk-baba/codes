#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int case1 = (a+b)+c;
	int case2 = (a+b)*c;
	int case3 = (a*b)*c;
	int case4 = (a*b)+c;
	int ans=case1;
	ans = max(ans,case2);
	ans = max(ans,case3);
	ans = max(ans,case4);
	case1 = a*(b+c);
	case2 = a+(b*c);
	ans = max(ans,case1);
	ans = max(ans,case2);
	cout<<ans<<endl;
}
