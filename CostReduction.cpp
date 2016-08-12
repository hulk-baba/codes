//============================================================================
// Name        : 
// Author      : Atul Kumar Gupta
// Description : 
// Status	   : AC
//============================================================================

#include <bits/stdc++.h>

using namespace std;

#define dg(x) cout << '>' << #x << ':' << x << endl;
#define sz(c)  (int) c.size()
#define all(c) c.begin(), c.end()
#define tr(container,it) for(__typeof(container.begin()) it = container.begin();it != container.end(); it++)
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
 
#define TRACE
 
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

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int cost[100][100];
string ans[100][100];
int ci;
int cr;
int cd;
int A_to_B(string A, string B){
	int n = sz(A);
	int m = sz(B);
	trace2(n,m);
	repn(i,1,n+1){
		repn(j,1,m+1){
			int tmp;
			string temp;
			if(cost[i-1][j]+cd < cost[i][j-1]+ci){
				tmp = cost[i-1][j]+cd;
				temp = "D";
			}
			else{
				tmp = cost[i][j-1]+ci;
				temp = "I";
			}
			if(A[i] == A[j]){
				if(cost[i-1][j-1] < tmp){
					cost[i][j] = cost[i-1][j-1];
				    ans[i][j] = ans[i-1][j-1];
				}
				else{
					cost[i][j] = tmp;
					if(temp=="D")
					ans[i][j] = ans[i-1][j] + "D";
					else
					ans[i][j] = ans[i][j-1] + "I";
				}
			}
			else{
				if(cost[i-1][j-1]+ci < tmp){
					cost[i][j] = cost[i-1][j-1]+ci;
					ans[i][j] = ans[i-1][j-1] + "I";
				}
				else{
					cost[i][j] = tmp;
					if(temp=="D")
					ans[i][j] = ans[i-1][j] + "D";
					else
					ans[i][j] = ans[i][j-1] + "I";
				}
				
			}
		}
	}
	cout<<"ANS ->"<<ans[n][m]<<endl;
	return cost[n][m];
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin>>ci>>cr>>cd;
	trace3(ci,cr,cd);
	string A;
	string B;
	//convert A->B
	cin>>A>>B;
	trace2(A,B);
	cout<<A_to_B(A,B)<<endl;
	
}

	

	

