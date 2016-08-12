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

int cache[100][22];
int Z[100][22];
int othersol(int A[],int n){
  Z[0][0] = 1;
  Z[0][1] = 1;
  int best = 1;
  
  for(int i = 1; i < n; i++){
    for(int j = i-1; j>= 0; j--){
      if(A[j] < A[i]) Z[i][0] = max(Z[j][1]+1,Z[i][0]);
      if(A[j] > A[i]) Z[i][1] = max(Z[j][0]+1, Z[i][1]);
    }
    best = max(best, max(Z[i][0],Z[i][1]));
  }
  return best;
}
int mysol(int a[],int n){
	cache[0][0]=1;
	cache[0][1] =1;
	for(int i=1;i<n;i++){
		if(a[i] - a[i-1] > 0){
			cache[i][1] = max(cache[i-1][0] + 1, cache[i-1][1]);
		}
		else if(a[i] - a[i-1] <0){
			cache[i][0] = max(cache[i-1][1] + 1, cache[i-1][0]);
		}
		
	}
	return max(cache[n-1][0], cache[n-1][1]);
	
}
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	int a[100];
	
	while(1){
		n = rand()%50+1;
		rep(i,n) a[i] = rand()%1000+1;
		int ans1 = mysol(a,n);
		int ans2 = othersol(a,n);
		rep(i,n) cout<<a[i]<<" ";
		opn;
		if(ans1!=ans2){
			cout<<ans1<<" "<<ans2;
			break;
		}
		else
			cout<<"OK";
		opn;
	}
}

	

	

