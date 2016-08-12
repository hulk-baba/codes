
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
#define ind(n,m) scanf("%d %d",&n,&m);
#define inl(n) scanf("%lld",&n)
#define ins(n) scanf("%s",n);
#define ina(n) cin>>n
#define opi(n) printf("%d",n)
#define opl(n) printf("%lld",n)
#define ops(n) printf("%s",n)
#define opn printf("\n")
#define opsp printf(" ");
#define opa(n) cout<<n

typedef vector<int>vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;


		
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	ini(n);
	if(n<10)
	opi(n);
	else if(n>=10 && n<=189){
		n = n-9;
		int c=9;
		while(n>1){
			c++;
			n-=2;
		}
		if(n==1)
		opi(c/10);
		else
		opi(c%10);
	}
	else{
		n = n-189;
		int c=99;
		while(n>2){
			c++;
			n-=3;
		}
		if(n==1)
		opi(c/100);
		else if(n==2)
		opi((c/10)%10);
		else
		opi(c%10);
	}
}



	


	

