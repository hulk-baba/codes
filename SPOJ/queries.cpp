#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    ll a[1000000];
    cin>>n;
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll l=0,r=1 ,j=0;
    ll ans = a[0];
    for(ll i=1;i<n;i++){
       ll x = a[i]-a[j];
        ans = min(a[i],ans);
        if(x==1||x==0){
            r = i;
        }
        else{
            while(abs(a[i]-a[j])>1){
                j++;
                ans = a[j];
            }
        }
    }
    cout<<r-j<<endl;
    return 0;
}
