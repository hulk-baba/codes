#include<bits/stdc++.h>
using namespace std;

int a[500005];
int cnt[1000005];
set<int>s;

int main(){

    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        cnt[i]=0;
    }
    int ans=1, l=1,r=1,i=1,j=1;
    while(i<=n){

        while(j<=n && ( (int)s.size() < k || ( (int)s.size() ==k && cnt[a[j]] > 0 )) ){
            s.insert(a[j]);
            cnt[a[j]]++;
            j++;

        }
        if((j-i)>ans){
            ans = j-i;
            l = i;
            r = j-1;
        }
        cnt[a[i]]--;
        if(cnt[a[i]] ==0)
        s.erase(a[i]);
        i++;
    }
    printf("%d %d",l,r);
    return 0;

}
