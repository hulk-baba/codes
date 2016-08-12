#include<bits/stdc++.h>
using namespace std;
long long main()
{
    string str;
    cin>>str;
    long long q;
    cin>>q;

    while(q--){
    	long long l = str.length();
        long long a,b;
        cin>>a>>b;
        a -=1;
        b-=1;
        a%=l;
        b%=l;
        if(str.at(a)==str.at(b))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }

    return 0;
}
