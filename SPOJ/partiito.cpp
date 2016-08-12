#include<bits/stdc++.h>
using namespace std;

int a[100];
int tree[100];

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void build(int node, int start, int en){
    if(start==en)
        tree[node] = a[start];
    else{
        int mid = (start+en)/2;
        build(2*node,mid+1,en);
        tree[node] = gcd(tree[2*node],tree[2*node+1]);
    }
}
int query(int node, int start,int en, int l ,int r){
    if(r<start || en < l){
        return 0;
    }
    if(l<=start && en<=r){
        return tree[node];
    }
    int mid = (start+en)/2;
    int p1 = query(2*node,start,mid,l,r);
    int p2 = query(2*node+1,mid+1,en,l,r);
    return gcd(p1,p2);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    build(1,1,n);
    int l,r;
    cin>>l>>r;
    int x = query(1,1,n,l,r);
    cout<<x<<endl;
    return 0;
}
