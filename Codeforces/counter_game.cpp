#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
bool ispowerof2(ll x){
    return (x&& !(x & (x-1)));

}
ll largestpowerof2(ll N){

    N = N | (N>>1);
    N = N | (N>>2);
    N = N | (N>>4);
    N = N | (N>>8);
    N = N | (N>>16);
    N = N | (N>>32);

    if(N&(1UL<<63))
    return 1UL<<63;
    else
    return (N+1)>>1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int toggle=1;
        while(n!=1){
            toggle = toggle^1;
            if(ispowerof2(n))
            n = n /2;
            else
            n = n-largestpowerof2(n);
        }
        if(toggle==1)
        cout<<"Richard"<<"\n";
        else
        cout<<"Louise"<<"\n";

    }
    return 0;

}
