#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[]={9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};
int noofdigits(ll x){
    int c=0;
    while(x){
        c++;
        x/=10;
    }
    return c;
}
int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        ll l,r,ans=1,i,p;
        cin>>l>>r;
        for(i=l;i<=r;i++){
            int d = noofdigits(i);
            p = i*(a[d-1]-i);
            if(p>ans)
            ans = p;
        }
        cout<<ans<<endl;

    }
    return 0;

}
