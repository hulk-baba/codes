#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000003
vector<ll>a(1000000000);
int main(){
    int t;
    cin>>t;
    a[0]=0;
    a[1]=1;
    a[2]=1;
    vector<ll>::iterator k;
    ll i=0;
    ll j=1;
    ll p = 3;
    for(k=a.begin()+3;k!=a.end();k++){
            ll w = ((a.at(i)%mod)+(a.at(j)%mod)+(2*p%mod))%mod;
            a.push_back(w);
            j++;i++;
            p++;

        }
    while(t--){

        ll n;
        cin>>n;
        cout<<a.at(n)<<endl;

    }
    return 0;
}
