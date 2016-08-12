#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll freq[1000000];
int Conquer(ll a[],int start, int mid, int en){
    int p=start,q=mid+1,k=0,cnt=0;
    ll arr[en-start+1];
    for(int i=start;i<=en;i++){
        if(p>mid){
            arr[k] = a[q];
            cnt += abs(a[q]-a[p]);
            freq[a[q]] += cnt;
            k++;q++;
        }
        else if(q>en){
            arr[k++] = a[p++];
            cnt += abs(a[q]-a[p]);
        }

        else if(a[p]<=a[q]){
            arr[k] = a[p];
            cnt = cnt + abs(a[q] - a[p]);
            k++;
            p++;
        }
        else{
            freq[a[q]] += cnt;
            arr[k++] = a[q++];
            cnt += abs(a[p]-a[q]);

        }
    }
    for(int i=0;i<k;i++){
        a[start++] = a[i++];
    }

}

int Divide(ll a[],int start,int en){
    if(start<en){
        int mid = (start+en)/2;
        Divide(a,start,mid);
        Divide(a,mid+1,en);
        Conquer(a,start,mid,en);

    }

}
int main(){
    int n,sum=0;
    ll a[200000];
    ll b[200000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    Divide(a,0,n-1);
    Divide(b,0,n-1);
    for(int i=0;i<n;i++){
    cout<<a[i]<<"=>"<<freq[a[i]]<<endl;
    sum += freq[a[i]];
    }
    cout<<"Sum is"<<sum<<endl;
	return 0;
}
