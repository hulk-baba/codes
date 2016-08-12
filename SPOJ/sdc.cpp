#include<bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    int maxx = a[1];
    int minn = a[1];
    b[a[1]]++;
    int ans = 0,now=1;
    for (int i = 2;i <= n;i++)
        {
            b[a[i]]++;
            maxx = max(maxx,a[i]);
            minn = min(minn,a[i]);
            while (maxx - minn >= 2)
            {
                b[a[now]]--;
                now++;
                while (!b[maxx])maxx--;
                while (!b[minn])minn++;
            }

            ans = max(ans,i - now + 1);
        }

    cout<<ans<<endl;
}
