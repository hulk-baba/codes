#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;
    cin>>n>>k;
    ll a[100000];
    ll i,j,sq=0,sum=0;


    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<=n-k;i++){

        for(j=0;j<=k-1;j++){
            sq = (j+1)*(j+1)*a[i+j];
            sum=sum+sq;

        }
        cout<<sum%(int)[pow(10,9)+7]<<" ";

    }
    return 0;


}
