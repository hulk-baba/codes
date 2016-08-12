#include<bits/stdc++.h>
using namespace std;

int noofones(int x){
    int c=0;
    while(x){
        x = x&(x-1);
        c++;
    }
    return c;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int i,sum=0;
        int a[1000];
        int b[1000];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            b[i] = noofones(a[i]);
        }
        sort(b,b+n);
        for(int l=n-1;l>=n-k;l++)
        sum+=b[i];
        cout<<sum<<endl;
    }
}
