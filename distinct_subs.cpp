#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

#define TRACE
 
#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
 
#else
 
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)    
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif 
typedef long long int ll;

ll dp[100005];
ll my_map[1000];
int main(){
	int t;
	cin>>t;
	while(t--){
		fill(dp,dp+100005,0);
		string str;
		cin>>str;
		ll n=str.length();
		fill(my_map,my_map+1000,-1);
		ll  ch = str[0]-'a';
		my_map[ch]=0;
		dp[0]=2;
		for(ll i=1;i<n;i++){
			ch = str[i] - 'a';
			if(my_map[ch] >=0){
				dp[i] = ((dp[i-1]*2)+ (mod -dp[my_map[ch]])%mod + 1)%mod;
			}
			else{
				dp[i] = dp[i-1]*2;
			}
			my_map[ch] = i;
		}
		cout<<dp[n-1]<<endl;
	}
}
