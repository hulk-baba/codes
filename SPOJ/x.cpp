#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200000];
ll b[200000];
ll upperbound(ll a[],ll n,ll value){
    ll start = 0; 
	ll en=n-1,index = n;
    while(start<=en)
	{
        ll mid = (start+en)/2;
        if(a[mid]<=value)
		{
            start = mid+1;
        }
        else
        {
        	en = mid-1;
            index= mid;
		}
    }
    return index;
}
int main(){
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++){
        ll x = upperbound(a,n,b[i]);
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}