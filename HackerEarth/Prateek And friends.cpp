//URL https://www.hackerearth.com/problem/algorithm/prateek-and-his-friends/?utm_source=header&amp;utm_medium=search&amp;utm_campaign=he-searcheditorial/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    ll x,n ;
    ll a[1000005];
    cin>>t;

    while(t--){
		bool flag = false;
        cin>>n>>x;
        ll i=0;
        for(;i<n;i++){
            cin>>a[i];
        }
        ll p1=0;
        ll sum=0;

        for(ll l=0;l<n;l++)
        {
            while(sum >x){
                sum = sum-a[p1];
                p1++;
            }
            if(sum==x)
            {
                flag  = true;
                break;
            }
            sum = sum+a[l];

        }
        while(sum>x){
            sum = sum - a[p1];
            p1++;
        }
        if(sum==x){
            flag = true;
        }


        if(flag==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    //getch();
    return 0;
}

