#include <iostream>
#include <stack>
//#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

#define tr(container,it) for(__typeof(container.begin()) it= container.begin(); it!=container.end();it++)
int main(){
	string str;
	cin>>str;
	int n=str.length();
	stack<char>s;
	//map for precendence
	map<char,int>m;
	m['+'] = 1;
	m['-'] = 1;
	m['*'] = 2;
	m['/'] = 3;
	//output stream
	vector<char>out;
	for(int i=0;i<n;i++){
			if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i] == '/'){
				if(s.empty() || m[str[i]]>m[s.top()]){
					s.push(str[i]);
				}
				else{
					while(m[s.top()]>=m[str[i]]){
						out.push_back(s.top());
						s.pop();
						if(s.empty()){
							s.push(str[i]);
							break;
						}
						
					}
				}
			}
			else if(str[i]=='('){
				s.push('(');
			}
			else if(str[i]==')'){
				while(s.top()!='('){
					out.push_back(s.top());
					s.pop();
				}
			}
			else{
				out.push_back(str[i]);
			}
				
	}
	while(!s.empty()){
		out.push_back(s.top());
		s.pop();
	}
	tr(out,it) cout<<*it;
}
