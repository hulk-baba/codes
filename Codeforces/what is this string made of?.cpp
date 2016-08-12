#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int l = str.length();
    int a[10];
    int sum=0;
    a[0]=6,a[1]=2,a[2]=5;a[3]=5;a[4]=4;a[5]=5;a[6]=6;a[7]=3;a[8]=7;a[9]=6;
    for(int i=0;i<l;i++){
        char ch = str.at(i);
        int p = (int)ch;
        // cout<<p<<"\n";
        // cout<<ch<<"\n";
        sum+=a[p-48];
    }
    cout<<sum;
    return 0;
}
