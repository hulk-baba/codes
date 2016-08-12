#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct predicate
{
    bool operator ()( const pair<int, int> &left, const pair<int, int> &right ) const
    {
        if(left.first>right.first)
        return true;
        else if(left.first==right.first){
            if(left.second<right.second)
            return true;
            else
            return false;
        }
        else
        return false;
    }
};

ll fib[100000];
ll freq[100000];
void fibonacci(){
    fib[0] = 0;
    fib[1] = 1;
    ll a=0,b=1,c;
    for(int i=2;i<10000;i++){
        c = a+b;
        fib[i] = c%26;
        a = b%26;
        b = c%26;;

    }
    // for(int i=0;i<10000;i++)
       // cout<<fib[i]<<endl;

}
int main() {
    fibonacci();
	int t;
	cin>>t;
	while(t--){
	    int l,r;
	    cin>>l>>r;
	    vector< pair<int,int> > v;

	    string str;
	    cin>>str;
	    for(int i=l;i<=r;i++){
	        freq[fib[i]]++;
	    }
	    for(int i=l;i<=r;i++){
	        pair<int,int>p;
	        p = make_pair(freq[fib[i]],fib[i]);
	        v.push_back(p);
	    }
	    vector< pair<int,int> >::iterator it = v.begin();
	    sort(v.begin(),v.end(),predicate());
	    for(int i=0;i<str.length();i++){
            if(it!=v.end()){
                if(freq[fib[it->second]]!=0){
                    str.at(i) = it->second;
                    freq[fib[it->second]] = 0;
                }


            }
	    }
	    cout<<str<<endl;
	}
	return 0;
}
