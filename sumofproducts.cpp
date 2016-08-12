#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[], int st ,int en, int val){
	int mid = (en+st)/2;
	if(st>en)
	return 0;
	else if(a[mid]==val)
	return 1;
	else if(a[mid] < val)
	return binary_search(a,mid+1,en,val);
	else if(a[mid] > val)
	return binary_search(a,st,mid-1,val);
}
int GCD(int a, int b){
	if(b==0)
	return a;
	return GCD(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int a[105];
		for(int i=0;i<n;i++)	
			cin>>a[i];
		sort(a,a+n);
		bool flag = false;
		for(int i=0;i<n;i++){
			int x = a[i];
			int gcd = GCD(x,p);
			if(gcd==x && binary_search(a,i+1,n-1,p/x)){
				flag=true;;
				break;
			}
			
		}
		if(flag)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
			
