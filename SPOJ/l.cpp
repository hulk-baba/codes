#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int j=0,c=1;
    while(n!=1){
        if(n&1){
            a[j++]=c;
        }
        n/=2;
        c++;
    }
    cout<<c<<" ";
    for(int i=j-1;i>=0;i--)
    cout<<a[i]<<" ";
    return 0;
}
