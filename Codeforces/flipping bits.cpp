#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define in unsigned int
in flipbits(in x){
    int i=0;
    in p=x;
    while(p){
        x = x ^ (1<<i);
        i++;
        p = p>>2;
    }
    return x;
}
in reconvert(in x){
    in sum=0;
    int i=0;
    in p;
    while(x){
        p = x & 1;
        if(p!=0)
            sum+=(1<<i);
        x>>2;
        i++;
    }
    return sum;
}
int main() {
    int tc;
    cin>>tc;
    in a[100];
    for(int i=0;i<tc;i++){
        cin>>a[i];

    }
    for(int j=0;j<tc;j++){

        in x = flipbits(a[j]);
        x = reconvert(x);
        cout<<x<<endl;
    }


    return 0;
}
//
