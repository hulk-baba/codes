#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	priority_queue<int>pq;
	if(n==1 || n==2)
	{
		for(int i=0;i<n;i++)
		cout<<"-1"<<endl;
	}
	
	else{
		pq.push(a[0]);
		pq.push(a[1]);
		for(int i=2;i<n;i++){
			pq.push(a[2]);
			int x = pq.top();
			
	return 0;
}
