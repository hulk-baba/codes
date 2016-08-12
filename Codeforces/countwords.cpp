#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    string str[10000];
    int c=0,i=0;
    while( getline(cin,line)){
        stringstream ss(line);
        string word;
        while(getline(ss,word,' ')){
            c++;
            str[i++] = word;
        }
    }
    cout<<c<<endl;
    for(int k=0;k<i;k++){
        cout<<str[k]<<endl;
    }

    return 0;


}
