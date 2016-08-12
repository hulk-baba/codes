#include<bits/stdc++.h>
using namespace std;
 
//#define TRACE
 
#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
 
#else
 
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)    
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif 

string str;
string ans="";
int n;
void borze(int i){
	trace1(i);
	if(i>n-1)
		return ;
	trace1(str[i]);
	if(str[i]=='.'){
		ans+="0";
		trace1(ans);
		borze(i+1);
	}
	
	else{
		if(i+1<=n-1 && str[i+1]=='-'){
			ans+="2";
			trace1(ans);
		}
		else if(i+1<=n-1 && str[i+1]=='.'){
			ans+="1";
			trace1(ans);
		}
		else
			return ;
		borze(i+2);
	}
}

int main(){
	cin>>str;
	trace1(str);
	n = (int)str.length();
	borze(0);
	cout<<ans<<endl;
}
