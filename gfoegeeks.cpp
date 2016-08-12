#include <bits/stdc++.h>

using namespace std;
int Binary_search(vector<int>&a,int st, int en){
    int mid = (en+st)/2;
    if(mid>=1 && a[mid]<a[mid-1] )
    return a[mid];
    else{ 
		return Binary_search(a,mid,en);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n,0);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int ans = Binary_search(a,0,n-1);
	    cout<<ans<<endl;
	}
	return 0;
}
