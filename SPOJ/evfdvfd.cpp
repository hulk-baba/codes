
/***** SOLVED BY AKG ****/
#include<bits/stdc++.h>
using namespace std;

int t[50000];

void build(int n){
	for(int i=n-1;i>0;i--){
		int sum = t[i<<1]+t[i<<1|1];
		int ans = max(t[i<<1],t[i<<1|1]);
		ans = max(ans,sum);
		t[i] = ans;
	}
}

int query(int l,int r,int n){
	int sum=0,ans=0;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1){
		if(l&1){
			sum = sum+t[l];
			ans = max(t[l],sum);
			l++;
		}
		if(r&1){
			--r;
			sum = sum+t[r];
			ans = max(t[r],sum);
		}
	}
	return ans;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",t+n+i);
	build(n);
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		int ans = query(x-1,y,n);
		printf("%d\n",ans);
	}
	return 0;
}


