#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100000];
ll freq[100000];
ll bakku(ll p1, ll p2, ll l, ll r){
    ll sum=0;
  for(int i=p1;i<=100000;i+=p1){
    a[i] = 1;
  }
  for(int i=p2;i<=100000;i+=p2)
    a[i] = 1;
  for(int i=p1;i<=100000;i++){
        if(a[i]==1){
            sum++;
            freq[i]=sum;
        }
        freq[i] = sum;

  }
   ll x = freq[r]-freq[l]+1;
   cout<<x<<endl;
   return x;


}
int main(){
    int p1,p2;
    cin>>p1>>p2;
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int sum = bakku(p1,p2,l,r);
        double ans=0.0;
        ans = (double)(sum/r-l+1);
        printf("%0.6lf\n",ans);

    }
    return 0;
}
