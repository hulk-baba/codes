#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        map<string,int>m;
        map<string,int>::iterator it;
        string str[100000];
        int n;
        scanf("%d",&n);
        int p=n;
        int i=0;
        while(n--){
            getline(cin,str[i]);
            m[str[i]]++;
        }
        for(int j=0;j<p;j++)
        cout<<str[j]<<endl;

    }
    return 0;

}
