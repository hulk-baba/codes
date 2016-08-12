#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin>>n;
    vector <ll> v;
    vector <ll> :: iterator it;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.begin()+n);
    for(it = v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}
