#include <bits/stdc++.h>
using namespace std;


void max_heapify(int a[], int i, int n){
	int left = 2*i;
	int right = 2*i+1;
	int maxi=i;
	if(left<=n && a[left]>a[i]){
		maxi = left;
	}
	if(right<=n && a[right]>a[maxi]){
		maxi = right;
	}
	if(maxi != i){
		swap(a[i],a[maxi]);
		max_heapify(a,maxi,n);
	}
	cout<<" i is :-> "<<i<<endl;
	//after heapifying
	//for(int i=1;i<=n;i++)
	//	cout<<a[i]<<" ";
	// cout<<endl;
}
void build_heap(int a[],int n){
	for(int i=n/2;i>=1;i--)
	max_heapify(a,i,n);
}
void heap_sort(int a[],int n){
	int heapsize = n;
	build_heap(a,n);
	for(int i=n;i>=2;i--){
		swap(a[1],a[i]);
		heapsize --;
		max_heapify(a,1,heapsize);
	}
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
}
int maximum(int a[]){
	return a[1];
}
int extract_maximum(int a[], int n){
	if(n==0){
		cout<<"Empty list"<<endl;
		return -1;
	}
	int max = a[1];
	a[1] = a[n];
	n -= 1;
	max_heapify(a,1);
	return max;
	
}
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	heap_sort(a,n);
	
}
