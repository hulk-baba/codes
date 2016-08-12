#include<bits/stdc++.h>
using namespace std;
int main(){
    vector < pair<string,int> > p;
    pair<string,int>x;
    for(int i=0;i<5;i++){
        int n;
        string str;
        cin>>n;
        cin>>str;
        x = make_pair(str,n);
        p[i] = x;
    }
    for(int j=0;j<5;j++){
        cout<<p[j].first<<' '<<p[j].second<<endl;
    }
    return 0;
}
