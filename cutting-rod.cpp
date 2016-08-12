#include<bits/stdc++.h>
using namespace std;

int p[]={0,1,5,8,9,10,17,17,20,24,30};
int r[500];
int cut_rod(int n){
	if(r[n] >0){
		return r[n];
	}
	if(n==0)
	return 0;
	int q = -100;
	for (int i=1;i<=n;i++){
		q = max(q,p[i] + cut_rod(n-i));
	}
	r[n] = q;
	return r[n];
}
int main(){
	int n;
	cin>>n;
	int rev  = cut_rod(n);
	cout<<rev<<"\n"; 
}
