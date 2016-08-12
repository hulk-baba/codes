#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;
        bool flag=false;
        int l = str.length();
        if(l<26)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else{
            bool a[26];
            for(int i=0;i<26;i++){
                a[i] = false;
            }
            for(int j=0;j<l;j++){
                char ch=str.at(j);
                int p=(int)ch;
               // cout<<p<<endl;
                if((a[p-97] == false)){
                a[p-97] = true;
                continue;
        }
        }

        for(int k=0;k<l;k++){
            if(a[k]==false){
                flag = true;
                break;
            }

        }
        if(flag==true)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

        }
    }
    return 0;
}
