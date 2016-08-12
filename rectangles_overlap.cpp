#include<bits/stdc++.h>
using namespace std;
int check(int a[], int b[], int d[], int m[] ){
    int ad[3];
    int ab[3];
    int am[3];
    ad[1] = d[1]-a[1];
    ad[2] = d[2]-a[2];
    ab[1] = b[1]-a[1];
    ab[2] = b[2]-a[2];
    am[1] = m[1]-a[1];
    am[2] = m[2]-a[2];
    int amad = am[1]*ad[1] + am[2]*ad[2];
    int amab = am[1]*ab[1] + am[2]*ab[2];
    int abab = ab[1]*ab[1] + ab[2]*ab[2];
    int adad = ad[1]*ad[1] + ad[2]*ad[2];
    // cout<<amad;
    // cout<<amab;
    // cout<<abab;
    // cout<<adad;
    if(0<amab&&amab<abab && 0<amad&&amad<adad)
    return 1;
    else
    return 0;
}
int main() {    
    int t;
    cin>>t;
    while(t--){
        int x[9];
        int y[9];
        for(int i=1;i<=4;i++){
            cin>>x[i]>>y[i];
        }
        if(x[1]==x[3]&&y[1]==y[3]&&x[2]==x[4]&&y[2]==y[4]){
            cout<<"1"<<"\n";
            return 0;
        }
        int ax = x[1];
        int ay = y[2];
         x[5] = x[3];
         y[5] = y[4];
         x[6] = x[4];
         y[6] = y[3];
        int a[]={0,ax,ay};
        int d[]={0,x[1],y[1]};
        int b[]={0,x[2],y[2]};
        bool flag = false;
        for(int i=3;i<=6;i++){
            int m[] = {0,x[i],y[i]};
            if(check(a,b,d,m)){
                flag=true;
                break;
            }
        }
        if(flag)
        cout<<"1"<<"\n";
        else
        cout<<"0"<<"\n";
        
        
    }
}
