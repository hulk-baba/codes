#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200000];
ll b[200000];
int upperbound(ll a[],int n,int value){
    int start = 0; int en=n-1,index = n;
    while(start<=en){
        int mid = (start+en)/2;
        if(a[mid]<=value){
            start = mid+1;
        }
        else if(a[mid]>value){
            en = mid-1;
            n= mid;
        }

    }
    return n;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++){
        int x = upperbound(a,n,b[i]);
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
