#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int freq[1000000];
int Merge(int a[],int start, int mid, int en){
    int p=start, q =mid+1, k=0;
    int arr[en-start+1];
    for(int i=start;i<=en;i++){
        if(p>mid){
            arr[k++] = a[q++];
        }
        else if(q>en){
            arr[k++] = a[p++];
        }
        else if(a[p]<a[q]){
            arr[k++] = a[p++];

        }
        else{
            arr[k] = a[q];
            for(int j=p;j<=mid;j++){

                freq[a[j]]++;
            }
            k++;
            q++;

        }
    }
    for(int p=0;p<k;p++)
    a[start++]= arr[p];
    return 0;

}
int CountInversion(int a[],int start, int en){
    if(start<en){
        int mid = (start+en)/2;
        CountInversion(a,start,mid);
        CountInversion(a,mid+1,en);
        Merge(a,start,mid,en);

    }
    return 0;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        CountInversion(a,0,3);
        //int i=0,j=0;
        for(int i=0;i<n;i++){
            cout<<freq[a[i]]<<endl;
        }


    }
    return 0;
}
