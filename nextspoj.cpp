#include<bits/stdc++.h>
using namespace std;

string  next(string str){
	int n = (int)str.length();
	int i;
	for(i=n-1;i>=1;i--){
		if(str[i]<=str[i-1])
		continue;
		else
		break;	
	}
	//string part2 = str.substr(i);
	//string part1 = str.substr(0,i);
	//cout<<part1<<" "<<part2;
	if(i==0)
	return str;
	char ch = str[i-1];
	int pos=i;
	for(int i=n-1;i>=pos;i--){	
		if(str[i] > ch){
			char tmp = str[i];
			str[i] = ch;
			str[pos-1] = tmp;
			break;
		}	
	}
	sort(str.begin()+pos,str.end());
	return str;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<char>str;
		while(n--){
			char p;
			cin>>p;
			str.push_back(p);
		}
		bool ans = next_permutation(str.begin(),str.end());
		//cout<<ans<<"\n";
		if(ans){
			vector<char>::iterator it=str.begin();
			for(;it!=str.end();it++)
			cout<<*it;
		}
		else
		cout<<"-1";
		cout<<"\n";
	}
}
	
