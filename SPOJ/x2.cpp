#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = false;
    int a[100000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=a[0];
    int pos=0,l=0,r=1,j=0;
    for(int i=1;i<n;i++){
        flag = true;
        if(a[i]<ans){
            ans = a[i];
            pos = i;
        }
        else if(abs(a[i]-ans)==1 || abs(a[i]-ans)==0){
            r++;
        }
        else{
            j++;
            ans = a[j];
            if((i-j) > (r-l)){
                r = i;
                l = j;
                cout<<"l=>"<<l<<"r=>"<<r<<endl;
            }
        }

    }
    if(flag == false)
    cout<<r-l<<endl;
    else
    cout<<r-l<<endl;
    return 0;
}
