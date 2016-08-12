#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    string str[100000];
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>str[i];
        set<string>s(str,str+n);
        set<string>::iterator it;
        for(it=s.begin();it!=s.end();it++)
            cout<<*it<<endl;

    }
    return 0;

}
