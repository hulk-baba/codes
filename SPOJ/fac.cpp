#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int ans = r;
        ans = max(ans,n-r);
        ll p1=1;
        for(int i=n;i>ans;i--)
        p1 *= i;
        for(int i=n-ans;i>=1;i)
        p1 /= i;

        cout<<p1<<endl;
    }
    return 0;
}
