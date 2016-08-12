#include<bits/stdc++.h>
using namespace std;
int a[500000];

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int j=0,gc= a[0],len=0;
    for(int i=1;i<n;i++){
        gc = gcd(a[i],gc);
        while(gc<k && j<i){
            j++;
            gc = gcd(a[j],a[i]);
        }
        len = max(len, i-j+1);
    }
    cout<<len<<endl;

}
