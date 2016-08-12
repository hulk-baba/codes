#include<iostream>
using namespace std;

void Merge(int a[], int start, int mid, int en){

    int arr[en-start+1],p=start,q=mid+1, k=0;
    for(int i=start; i<=en; i++){
        if(p>mid){
            arr[k++] = a[q++];
        }
        else if(q>en){
            arr[k++] = a[p++];
        }
        else if(a[p]<a[q])
            arr[k++] = a[p++];
        else
            arr[k++] = a[q++];

    }
    for(int p=0;p<k;p++){
        a[start++] = arr[p];
    }
}

void mergeSort(int a[], int start, int en){
    if(start<en){
        int mid = (start+en)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,en);
        Merge(a,start,mid,en);
    }

}
int printArray(int a[],int start, int en){
    for(int i=start;i<=en;i++)
    cout<<a[i]<<" ";
    return 0;
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    mergeSort(a,0,9);
    printArray(a,0,9);
    return 0;




}
