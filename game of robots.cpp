#include<bits/stdc++.h>
#define ll long 
using namespace std;

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[1001];
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	int b[1001];
	for(int i=1;i<=n;i++)
	scanf("%d",&b[i]);
	int c[1001];
	int d[1001];
	for(int i=1;i<=n;i++){
		d[i] = b[i];
	}
	int p=0;
	while(k>0){
		for(int i=1;i<=n;i++){
		c[i] = d[i]/a[i];
	}
		int min = *min_element(c+1,c+n+1);
		for(int i=1;i<=n;i++){
			d[i] = a[i]-(b[i] - min*a[i]);
		}
		int sum=0;
		for(int i=1;i<=n;i++){
			
			if(d[i]>0){
				sum+=d[i];
			}
		}
		if(sum<=k){
			min++;
			for(int i=1;i<=n;i++){
				if(d>0)
				d[i]= 0;
				else
				d[i] = b[i] - (min)*a[i];
			}
			 k = k-sum;
		 }
		 p = p+min;
	 }
	 cout<<p<<endl;		 
			
	
		
	
}
	

