/*Solved BY AKG */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	set<int>s;
	int don=1000000;
	for(int i=1;i<=n;i++){
		int r;
		scanf("%d",&r);
		if(r!=0){
			s.insert(r);
		}
		else
		don=i;
	}
	for(int i=1;i<=n;i++){
		set<int>::iterator it;
		it = s.find(i);
		if(it!=s.end())
		continue;
		else{
			if(i!=don)
		cout<<i<<" ";
		//cout<<i<<" ";
	}
}
	return 0;
}
