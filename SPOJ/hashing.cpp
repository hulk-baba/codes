#include<bits/stdc++.h>
#define ll long long
int a[100000];
int freq[1000000];
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[100000];
	for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
	}
	int q;
	scanf("%d",&q);
	for(int x=0;x<q;x++){
        int i,j;
        int sum=1;
        scanf("%d %d",&i,&j);
        for(int z=i-1;z<=j-1;z++){
            if(freq[a[z]] == 1)
            sum++;
        }
        cout<<sum<<endl;

    }
	return 0;
}
