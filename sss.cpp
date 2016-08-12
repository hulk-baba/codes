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
#define sz(C) return (int) C.size()
#define all(C) c.begin(), c.end()
#define tr(container,it) for(typeof(container.begin()) it = container.begin();it != container.end(); it++)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
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

typedef unsigned long long int ull;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        //cout<<str<<endl;
        int a[26];
        char ch = 'a';
        rep(i,26){
            int c=0;
            repn(j,str.length()){
                if(str[j] == ch){
                c++;
            }
        }
        a[i]=c;
        ch++;
        }
        int index = max_element(a,a+26) - a;
        index += 97;
        cout<<*max_element(a,a+26)<<" "<<(char)index<<endl;
        //printf("\n");
    }
}
