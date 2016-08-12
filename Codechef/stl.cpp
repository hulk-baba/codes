#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>LI;
    int a,i,n;
    cin>>n;
    list<int>::iterator it;
    list<int>::reverse_iterator rit;
    for(i=0;i<n;i++){
        cin>>a;
        LI.push_back(a);
    }
    LI.push_front(10);
    it = LI.begin();
    LI.erase(it);
    for(rit=LI.rbegin();rit!=LI.rend();rit++)
    cout<<*rit<<" ";
    return 0;

}
