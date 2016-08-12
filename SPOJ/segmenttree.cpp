
/***** SOLVED BY AKG ****/
#include<bits/stdc++.h>
using namespace std;

struct node{
	int bestleft,bestright,sum,bestsum;
}t[50000];

void build(int n){
    struct node left,right;
	for(int i=n-1;i>0;i--){
		left = t[i<<1];
		right = t[i<<1|1];
		t[i].bestleft = max(left.bestleft,left.sum+right.bestleft);
		t[i].bestright = max(right.bestright,right.sum+left.bestright);
		t[i].sum = left.sum + right.sum;
		t[i].bestsum = max(max(left.bestsum,right.bestsum),(left.bestright+right.bestleft)); 
	}
}

int query(int l,int r,int n){
	struct node p1,p2,ans;
	p1.bestleft=0;
	p1.bestright=0;
	p1.sum=0;
	p1.bestsum=0;
	p2.bestleft=0;
	p2.bestright=0;
	p2.sum=0;
	p2.bestsum=0;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1){
		if(l&1){
			p1.bestleft = max(p1.bestleft,p1.sum+t[l].bestleft);
			p1.bestright = max(t[l].bestright,t[l].sum+p1.bestright);
			p1.sum = p1.sum + t[l].sum;
			p1.bestsum = max(max(p1.bestsum,t[l].bestsum),p1.bestright+t[l].bestleft);
			l++;
		}
		if(r&1){
			--r;
			p2.bestleft = max(t[r].bestleft, t[r].sum+p2.bestleft);
			p2.bestright = max(p2.bestright,p2.sum+t[r].bestright);
			p2.sum = t[r].sum + p2.sum;
			p2.bestsum = max(max(t[r].bestsum, p2.bestsum),t[r].bestright+p2.bestleft);
			
		}
	}
	for(int i=1;i<=9;i++){
		printf("left t[%d]=>%d\n",i,t[i].bestleft);
		printf("right t[%d]=>%d\n",i,t[i].bestright);
		printf("sum t[%d]=>%d\n",i,t[i].sum);
		printf("bestsum t[%d]=>%d\n",i,t[i].bestsum);
	}
			cout<<"Parameters of p1"<<p1.bestleft<<" "<<p1.bestright<<" "<<p1.sum<<" "<<p1.bestsum<<endl;
			cout<<"Parameters of p2"<<p2.bestleft<<" "<<p2.bestright<<" "<<p2.sum<<" "<<p2.bestsum<<endl;
			ans.bestleft = max(p1.bestleft,p1.sum+p2.bestleft);
			ans.bestright = max(p2.bestright,p2.sum+p1.bestright);
			ans.sum = p1.sum + p2.sum;
			ans.bestsum = max(max(p1.bestsum,p2.bestsum),p1.bestright+p2.bestleft);
			/*printf("%d ans left\n",ans.bestleft);
			printf("%d ans right\n",ans.bestright);
			printf("%d ans sum\n",ans.sum);
			printf("%d ans bestsum\n",ans.bestsum);*/
	return ans.bestsum;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int val;
		scanf("%d",&val);
		t[n+i].bestleft = t[n+i].bestright = t[n+i].sum = t[n+i].bestsum= val;
	}
	build(n);
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		int ans = query(x-1,y,n);
		printf("%d\n",ans);
		printf("%d\n",t[1].bestsum);
	}
	return 0;
}
	
	
	

