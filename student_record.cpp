#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int m1,m2,m3;
	int avg;
	
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string nmax="" ; int maxavg=0;
		struct student std[15];
		for(int i=0;i<n;i++){
			cin>>std[i].name;
			cin>>std[i].m1>>std[i].m2>>std[i].m3;
			std[i].avg = (std[i].m1+std[i].m2+std[i].m3)/3;
			if(std[i].avg > maxavg){
				nmax=std[i].name;
				maxavg = std[i].avg;
			}
		}
		cout<<nmax<<" "<<maxavg<<"\n";
		 	
	}	
}

