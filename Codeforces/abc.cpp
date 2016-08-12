#include<bits/stdc++.h>
using namespace std;

int noofzeros(int x){
    int p=0;
    while(x){
        p = p + x/5;
        x/=5;
    }
    return p;

}
int main(){
    int t;
    cin>>t;
    int a[5000];
    a[1] = 1;
    int z=0;
    for(int i=1;i<5000;i++){
        int x = noofzeros(i);
        if(x-z){
         a[x] = i;
         while(z!=x){
            z++;
            a[z] = i;
         }
        }
        else
        z = x;
    }
    while(t--){
        int p;
        cin>>p;
        cout<<a[p]<<endl;
    }
    return 0;
}
