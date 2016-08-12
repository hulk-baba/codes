#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int a[10000];
    int l = str.length();
    for(int i=0;i<l;i++){
        char ch = str.at(i);
        int c = ch-48;
        a[i] = c;
    }
    for(int i=0;i<l;i++){
        int sum=0;
        for(int j=i;j<l;j++){
            if(!(a[j]&1))
            sum++;

        }
        cout<<sum<<" ";
    }
    return 0;
}
