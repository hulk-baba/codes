#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(const int &a, const int &b){
	if(a<b)
	return true;
	else
	return false;
}
int main(){
	int n,k,q;
	scanf("%d %d %d",&n,&k,&q);
	int t[200000];
	for(int i=0;i<k;i++)
	scanf("%d",&t[i]);
	int type[10000], id[10000];
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		type[i] = x;
		id[i] = y;
	}
	vector <int> v;
	int c=0;
	while(v.size()<=k && c<q){
		if(type[c]==1)
		v.push_back(id[c]);
		c++;
	}
	
		
	
		
	
		

