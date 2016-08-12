#include<bits/stdc++.h>
using namespace std;

void main(){
    int n,k,i,j;
    string str;
    //vector <int> v;
    vector <int> a;
    vector <int> b;
    //vector<int>::iterator it ;
    cin>>n>>k;
    cin>>str;
    int l = str.length();
    for(i=0;i<l;i++){
        char ch =  str.at(i);
        int c = ch-48;
        b.push_back(c);
        cout<<b[i]<<" "<<endl;
    }

    a[0] = b[0];
    for(i=1;i<k;i++){
        a[i] = b[i]^b[i-1];
    }
    for(i=k;i<n;i++){
        int x=0;
        int p=k-1;
        int j = i-1;
        while(p--)
        {
            x = x ^ a[j];
            j--;
        }
        a[i] = b[i]^x;

    }
    for(i=0;i<n;i++)
    cout<<a[i];

}

