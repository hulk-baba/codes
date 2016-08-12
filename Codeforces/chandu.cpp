#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Merge(ll a[],int n, ll b[], int m){
    int p=0,q=0,k=0;
    int arr[n+m];
    for(int i=0;i<m+n;i++){
        if(p>n)
        arr[k++] = b[q++];
        else if(q>m)
        arr[k++] = a[p++];
        else if(a[p]<=b[q])
        arr[k++] = a[p++];
        else
        arr[k++] = b[q++];
    }
    for(int i=k-1;i>=0;i--){
        cout<<arr[i]<<" ";

    }
    return 0;


}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        ll a[100000];
        ll b[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        Merge(a,n,b,m);
        cout<<endl;

    }
    return 0;
}
