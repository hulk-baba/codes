#include<bits/stdc++.h>
using namespace std;

bool isPower(int x){
    return (x && !(x&(x-1)));

}

int noofones(int x){
    int counter=0;
    while(x){
        x = x&(x-1);
        counter++;
    }
    return counter;
}
int ithbitisset(int x,int i){
    if(x & (1<<i))
    return 1;
    else
    return 0;
}
int possiblesubsets(char a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if (i&(1<<j))
            cout<<a[j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}
int largestpower(int x){
    x = x|(x>>1);
    x = x|(x>>2);
    x = x|(x>>4);
    x = x|(x>>8);
    cout<<((x+1)>>1)<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        bool ans = isPower(a);
        if(ans==false)
        cout<<"Not a power"<<"\n";
        else
        cout<<"It is power\n";
        cout<<"No of ones are :"<<noofones(a)<<endl;
        int x = ithbitisset(a,5);
        if(x==1)
        cout<<"Yes it is set"<<"\n";
        else
        cout<<"No it is not set"<<"\n";
        largestpower(a);


    }
    char a[]={'a','b','c','d'};
    possiblesubsets(a,4);
    return 0;
}
