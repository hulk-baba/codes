#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int n;
int a[101000],maxx,minn;
int b[101000];
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) scanf("%d",&a[i]);
    maxx = minn = a[1]; b[a[1]]++;
    int now = 1,ans = 0;
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
    cout << ans << endl;
}
