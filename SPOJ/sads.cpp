#include<bits/stdc++.h>
using namespace std;

bool compare(const pair <string,int> &i,const  pair <string,int> &j)
{
    return i.second < j.second;
}
int main(){
    int n;
    vector< pair<string,int> > v;
    vector< pair<string,int> >::iterator it , it2;
    vector< pair<string,int> >::reverse_iterator rit;
    pair<string,int> p;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        int x;
        cin>>str>>x;
        p = make_pair(str,x);
        v.push_back(p);
    }
    	sort(v.begin(),v.end(),compare);
        for(rit = v.rbegin();rit!=v.rend();rit++)
            cout<<rit->first<<" "<<rit->second<<endl;
    return 0;

}
