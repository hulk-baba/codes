#include<bits/stdc++.h>
#define fori(i,a,b) for(i=a;i<b;i++)
using namespace std;

bool binarySearch(int a[],int start,int en, int item){
    if(start<=en){
        int mid = (start+en)/2;
        if(a[mid]==item)
        return true;
        else if(a[mid]<item){
            start=  mid+1;
            binarySearch(a,start,en,item);
        }
        else{
            en = mid-1;
        }
    }
    else
        return false;
}
int main(){
    int a[10];
    int n;
    cin>>n;
    int i;
    fori(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    if(binarySearch(a,0,n-1,67))
    cout<<"Present";
    else
    cout<<"Not";
}
