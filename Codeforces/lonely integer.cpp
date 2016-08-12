#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[100];
    int x=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++){
        x = x^a[i];
    }
    cout<<x;
    return 0;
}
