#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ut=0,sh=0,sum=0;
        int a[1000];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans = a[0];
        for(int i=0;i<n;i++){
            ans = min(ans,a[i]);
            sum += a[i];
        }
        ut = ans-1;
        sh = sum - n;
        cout<<ut<<" "<<sh<<endl;
    }
    return 0;
}
