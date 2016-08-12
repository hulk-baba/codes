#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,i,j,sum;
        int a[10000];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++){
            sum=0;
            for(j=i+1;j<n;j++){
                if(a[j]<a[i])
                sum++;
            }
        }
        cout<<sum<<" ";

    }
    return 0;
}
