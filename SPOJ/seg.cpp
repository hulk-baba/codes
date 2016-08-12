#include<bits/stdc++.h>
using namespace std;

int getSize(int n){

    int siz = 1;
    for(;siz<n;siz = siz<<1);
    return siz;
}
int main(){
    int n = 12;
    cout<<getSize(n);
}

