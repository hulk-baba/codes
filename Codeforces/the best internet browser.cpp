#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;
        int c1=0;//for normal browser
        int c2=0;//for this browser
        int vc=0;//vowel counter
        for(int i=4;i<=str.length()-5;i++){
            char ch = str.at(i);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vc++;
            }
        }
        c1 = str.length();
        c2 = c1-4-vc;
        cout<<c2<<"/"<<c1<<endl;
    }
    return 0;
}


