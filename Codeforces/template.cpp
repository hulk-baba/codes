#include<bits/stdc++.h>
using namespace std;

void traverse(vector<int> v)
{
    vector <int>::iterator it;
    for(it = v.begin();it!=v.end();++it)
        cout<<*it<<' ';
    cout<<endl;
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<' ';
    cout<<endl;

}
int main(){
    vector <int> v;
    vector <int>::iterator it;
    cout<<"Size of vector"<<v.size()<<endl;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(it=v.begin();it!=v.end();++it)
        cout<< *it<<' ';
    cout<<endl;
    for(int i = 0;i < v.size();++i)
        cout << v.at(i) << ' ';
    cout<<endl;
    while(!v.empty()){
        cout<<v.back()<<' ';
        v.pop_back();
    }
    cout<<endl;
    return 0;


}
