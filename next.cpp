#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int n=a.length();
		int pos=n-1;
		int i=n-1;
		while(a[i]<=a[i-1] && i>=1){
			i -= 1;
			pos=i;
			//cout<<"i:->"<<i<<" pos->"<<pos<<endl;
		}
		char ch;
		for(int i=n-1;i>=pos;i--){
			if(a[i]>a[pos-1]){
				ch = a[pos-1];
				a[pos-1]= a[i];
				a[i] = ch;
				break;
			}
		}
		if(pos==0){
			cout<<"not possible";
			cout<<endl;
			continue;
		}
		sort(a.begin()+pos,a.begin()+n);
		cout<<a<<endl;
	}
}
