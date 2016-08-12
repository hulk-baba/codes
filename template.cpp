/*Solved BY AKG */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool comparator( pair<int,int> &p1, pair<int ,int> &p2){
	if(p1.first < p2.first)
		return true;
	else if(p1.first == p2.first){
		if(p1.second >= p2.second)
		return true;
		else
		return false;
	}
	else
		return false;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		vector< pair<int,int> > v;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			pair<int,int>p;
			int x,y;
			scanf("%d%d",&x,&y);
			p = make_pair(x,y);
			v.push_back(p);
		}
		sort(v.begin(),v.end(),comparator);
		vector< pair<int,int> >::iterator it;
		for(it= v.begin();it!=v.end();it++)
		printf("%d %d\n",it->first,it->second);
	}
	return 0;
}
