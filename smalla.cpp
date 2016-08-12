#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int a[1000];
	int n;
	cin>>n;
	int p=n;
	while(n--){
		int flag=0;
		int c;
		cin>>c;
		int l;
		cin>>l;
		for(int i=0;i<l;i++){
			cin>>a[i];
		}
		for(int i=0;i<l;i++){
			for(int j=i+1;j<l;j++){
				if(a[i]+a[j] == c){
					printf("Case #%d: %d %d\n",(p-n),i+1,j+1);
					flag=1;
					break;
				}
			}
				if(flag==1)
				break;
			}
		}
		return 0;
	}
					
			
		
	
		
	
		

