#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
//#define TRACE

#define tr(container,it) for(__typeof(container.begin()) it = container.begin();it!=container.end();it++) 
#ifdef TRACE
#define trace1(x) cerr<<#x<<" : "<<x<<endl;

#else
#define trace1(x);
#endif

typedef vector<int> vi;
int main(){
	int x=5;
	trace1(x);
	cout<<"d"<<endl;
	vi v;
	v.pb(5);
	v.pb(6);
	tr(v,it) cout<<*it<<" ";
}
