#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        bool flag = false;
        int n;
        cin>>n;
        int i=0;
        while(i*i*i<=n){
            i++;
        }
        map<int,int> m;
        int c=0;
        for(int j=1;j<=i;j++){
            for(int k=1;k<=j;k++){
               int x= j*j*j + k*k*k;
               if(x<=n){
                m[x]++;
               }

            }
        }
        map<int, int>::reverse_iterator it;
        for(it = m.rbegin(); it!=m.rend();it++){
            if(it->second>=2){
                cout<<it->first<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false)
        cout<<"-1"<<endl;
    }
    return 0;
}
