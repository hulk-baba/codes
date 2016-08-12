#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        string str[100000];
        map<string,int>mp;
        map<string,int>::iterator it;
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            getline(cin,str[i]);
            mp[str[i]] = 0;
        }
        sort(str,str+n);
        for(int i=0;i<n;i++){
            it = mp.find(str[i]);
            if(it->first == str[i])
            mp[str[i]]++;

        }
        for(int i=0;i<n;i++){
            cout<<str[i]<<" "<<mp[str[i]]<<endl;

        }
        cout<<endl;
    }
    return 0;

}
