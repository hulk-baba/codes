#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,maxi=0,l,m;
    cin>>n>>k;
    int a[1000000];
    int i,p=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    set<int>s;
    vector<int>v;
    vector<int>::iterator it;
    it = v.begin();
    for(i=0;i<n;i++){
        v.push_back(a[i]);


        while(s.size()>k){

            v.erase(v.begin());
            if((i-p)>maxi){
                maxi = i-p;
                l = p+1;
                m = i-1;
            }
            for(it = v.begin();it!=v.end();it++)
                s.insert(*it);
            p++;
        }


    }
    if(s.size()==n||s.size()==1)
    {
        l = 1;
        m = n;
    }
    cout<<l<<" "<<m<<endl;


}
