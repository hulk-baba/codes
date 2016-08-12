#include<bits/stdc++.h>
using namespace std;


int sizer(vector<int>v){
    set<int>s;
    vector<int>::iterator it;

    for(it= v.begin();it!=v.end();it++)
        s.insert(*it);
    return s.size();
}

int main(){
    bool flag = false;
    int n,k,p=0,i,l,m,length,maxi=0;
    cin>>n>>k;
    int a[1000000];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int>v;
    vector<int>::iterator it;
    vector<int>::iterator it2;
    vector<int>::iterator it3;
    for(i=0;i<n;i++){
        v.push_back(a[i]);

        // for(it = v.begin();it!=v.end();it++)
        // cout<<"=>"<<*it<< " ";
        // cout<<endl;
        // cout<<"Length=> "<<sizer(v)<<endl;
        // cout<<"i=> "<<i<<endl;
        //  cout<<"p=> "<<p<<endl;
        while(sizer(v) > k){
            flag = true;
            v.erase(v.begin());
            // for(it2 = v.begin();it2!=v.end();it2++)
            //     cout<<"=>"<<*it2<< " ";
            // cout<<endl;
            // cout<<"Length=> "<<sizer(v)<<endl;
            // cout<<"i=> "<<i<<endl;
            //  cout<<"p=> "<<p<<endl;
            //  cout<<"i-p => "<<(i-p)<<endl;

             p++;
        }
        if((i-p)>=maxi){
                maxi = i-p;
                l = p+1;
                m = i+1;
            }



    }
    // for(it3 = v.begin();it3!=v.end();it3++)
    //   cout<<"=> "<<*it3<<endl;
    if(flag==false){
        if(sizer(v) == n || sizer(v) == 1){
        l=1;
        m=n;
    }
    }
    cout<<l<<" "<<m<<endl;
    return 0;
}
