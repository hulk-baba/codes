#include<bits/stdc++.h>
using namespace std;
	
void max_heapify(int a[],int i,int n){
	int left = 2*i;
	int right = 2*i+1;
	int largest;
	if(left<=n && a[left]>a[i]) largest = left;
	else largest = i;
	if(right<=n && a[right]>a[largest]) largest = right;
	if(largest != i){
		swap(a[i],a[largest]);
		max_heapify(a,largest,n);
	}
}
void build_heap(int a[],int n){
	for(int i=n/2;i>=1;i--){
		max_heapify(a,i,n);
	}
}	
void heap_sort(int a[],int n){
	int heapsize = n;
	build_heap(a,n);
	for(int i=n;i>=2;i--){
		swap(a[1],a[i]);
		heapsize = heapsize-1;
		max_heapify(a,1,heapsize);
	}
}		
int main(){
	int  n = 7;
	int a[7];
	for(int i=1;i<=7;i++)
	scanf("%d",a+i);
	heap_sort(a,n);
	for(int i=1;i<=7;i++)
	cout<<a[i]<<" ";
	return 0;
}



