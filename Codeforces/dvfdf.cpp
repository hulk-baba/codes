#include<bits/stdc++.h>
using namespace std;

//bool isPoweof2(int x){
//   return (x && !(x & (x-1)));
//}
int main(){
   /* int p=10;
    while(p--){
     cout<<"Enter a no;\n";
    int n;
    cin>>n;
    bool flag;
    flag = isPoweof2(n);
    if(flag==true)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    }*/
    int x =0;
    int a[11];
    for(int i=0;i<11;i++)
    cin>>a[i];
    for(int i=0;i<11;i++)
    {
     x ^= a[i];

    }
    cout<<x;
    return 0;
}
