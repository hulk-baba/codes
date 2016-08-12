#include<bits/stdc++.h>
using namespace std;

int main(){
    int l = 0, r=0 ,ans = 0;
    int a[1000000];
    int n,k,i,j;
    map <int,int> cnt;
    set <int> s;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(l<n){
        while(r<n && s.size()<=k){
            s.insert(a[r]);
            cnt[a[r]]++;
            r++;
        }
        if((r-l)>ans){
            i=l;
            j=r;
            ans = r-l;
        }
        if(cnt[a[l]]==1)
        s.erase(a[l]);
        cnt[a[l]]--;
        l++;

    }
    cout<<i<<" "<<j;
    return 0;
}
