#include<bits/stdc++.h>
using namespace std;


int func(int*a,int p, int n)
{
	int h[100]={0};
	int i,c=0;
	for(i=p;i<n;i++)
		h[a[i]]+=1;
	for(i=p;i<n;i++)
	{
		if(h[a[i]]>0)
		{
			c++;
			h[a[i]]=0;
		}
	}
	return c;
}

int main(){
    bool flag = false;
    int n,k,p=0,i,l,m,length,maxi=0;
    cin>>n>>k;
    int a[1000000];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=k;i<=n;i++){
        // cout<<"i=> "<<i;
        // cout<<endl;
        // cout<<"p=> "<<p;
        // cout<<endl;
        // for(int x=p;x<i;x++)
        // cout<<"=>"<<a[x];
        // cout<<endl;
        // cout<<"Length=>"<<func(a,p,i);
        // cout<<endl;

        while(func(a,p,i) > k){
            // cout<<"i=> "<<i;
            // cout<<endl;
            // cout<<"p=> "<<p;
            // cout<<endl;
            flag = true;
            p++;
            i--;
        }
        if((i-p)>maxi){
            l = p+1;
            m = i;
            maxi = i-p;

        }

        }
        if(flag==false){
        if(func(a,p,i) == n || func(a,p,i) == 1){
        l=1;
        m=n;
    }
    }
    cout<<l<<" "<<m<<endl;
    return 0;
}
