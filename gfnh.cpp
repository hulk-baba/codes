#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <regex>
#include<bits/stdc++.h>

using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define sz(c)  (int) c.size()
#define all(c) c.begin(), c.end()
#define tr(container,it) for(typeof(container.begin()) it = container.begin();it != container.end(); it++)
#define pii pair<int,int>
#define present(s,x) s.find(x) != s.end()
#define cpresent(c,x) find(all(c),x) != c.end()
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define dep(i,n) for(int i=n-1;i>=0;i--)
#define repn(i,a,b) for(int i=a; i<b;i++)
#define ini(n) scanf("%d",&n)
#define ioa(n,a) { ini(n); rep(i,n) ini(a[i]) ;}
#define ind(n,m) scanf("%d %d",&n,&m);
#define inl(n) scanf("%l64d",&n)
#define ins(n) scanf("%s",n);
#define ina(n) cin>>n
#define opi(n) printf("%d",n)
#define opl(n) printf("%l64d",n)
#define ops(n) printf("%s",n)
#define opn printf("\n")
#define opsp printf(" ");
#define opa(n) cout<<n
 
typedef vector<pair<int,int> > vp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;

class BinaryCode {
public:
	vector <string> decode(string);
};

string makestr(vi &p){
	string res="";
	rep(i,(int)p.size())
		res += p[i] + '0';
	return res;
}

string validate(vi &b, vi&a){
	bool flag = true;
	//cout<<flag;opn;
	//DEBUG(b[1]);
	if((b[1]==1 || b[1]==0))
		flag = true;
	else
		flag = false;
		
	//cout<<flag;opn;
	if(flag){
		for(int i=2;i<(int)a.size();i++) {
			b[i] = a[i-1] - b[i-1] - b[i-2];
		//	DEBUG(flag);
		//	printf(">b[%d] :-> %d\n",i,b[i]);
			if((b[i]==1 || b[i]==0))
			flag = true;
			else{
				 flag = false ;
				 break;
				}
			}
	}
	//tr(b,it)
	//cout<<*it;
	//opn;
	////cout<<flag;opn;
	if(flag){ string s = makestr(b); return s;}
	else
	return "NONE";
	
}

vector <string> BinaryCode::decode(string message) {
	int l = message.length();
	vi a(l,0);
	vi b(l,0);
	rep(i,l){
		a[i] = message[i] - '0'; 
	}
	b[0] = 0; b[1] = a[0] - b[0];
	string ans1 = validate(b,a);
	b[0] = 1; b[1] = a[0] - b[0];
	string ans2 = validate(b,a);
	vector<string>v;
	v.pb(ans1);v.pb(ans2);
	return v;
	
}
/*int main(){
	string str;
	cin>>str;
	BinaryCode obj1;
	vector <string> v ;
	v = obj1.decode(str);
	tr(v,it)
	cout<<*it<<" ";
}*/

	

	

