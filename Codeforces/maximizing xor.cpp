#include<bits/stdc++.h>
using namespace std;
int main(){
    int max =0;
    int l,r,c;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            c = i^j;
            if(c>max)
            max=c;
        }

    }
    cout<<max<<endl;
    return 0;

}
