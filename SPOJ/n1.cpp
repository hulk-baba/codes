#include<bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
bool a[N];
int freq[N];
int cnt[N];
void Sieve(){
	fill(a,a+N,true);
	a[0]=a[1]=false;
	for(int i=2;i*i<=N-1;i++){
		if(a[i]==true){
			for(int j=i*i;j<=N-1;j+=i){
				a[j] = false;
			}
		}
	}
	fill(freq,freq+N,2);
	freq[0]=0,freq[1]=1;
	for(int i=2;i<=N/2;i++){
		for(int j=i*2;j<=N-1;j+=i){
			freq[j]++;
		}
	}
	vector <pair <int,int> > v;
	vector <pair <int,int> >:: iterator it;
	for(int i=1;i<=N;i++){
		pair<int,int>p;
		p = make_pair(freq[i],i);
		v.push_back(p);
	}
	int b[100];
	int p=0;
	sort(v.begin(),v.end());
	for(int i=2;i<=17;i++){
		if(a[i]==true){
			for(int j=i+1;j*i<=241;j++){
				if(a[j]==true){
					b[p++]=i*j;
				}
			}
		}
	}
	int w[N];
	int s=0;
	for(it=v.begin();it!=v.end();it++){
		int x = it->first;
		for(int j=0;j<p;j++){
			if(b[j]==x){
				w[s++]=it->second;
			}
		}
	}
	sort(w,w+s);
	for(int i=8;i<s;i+=9)
	cout<<w[i]<<endl;
}		
		
			
				
int main(){
	Sieve();
	return 0;
}
