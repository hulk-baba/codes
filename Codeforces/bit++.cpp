#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool compare(char a[],int j,int i){
    bool flag=false;
    int m=0,n=0;
    for(int c=j;c<i;c++){
        if(a[c]=='1')
            m++;
        if(a[c]=='0')
            n++;
    }
    if(m==7||n==7)
    flag = true;
    return flag;


}
int main(){
	char str[150];
	cin>>str;
	int i,j=0;
	char s[150];
	int l =strlen(str);
	if(l<7){
        cout<<"NO"<<endl;
        return 0 ;
	}
	for(i=0;i<l;i++){
        while(strlen(s)!=7){
            s[i]= str[i];
        }
        if(compare(s,j,i)){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            j++;

        }
    }
    if(i==l)
    cout<<"NO"<<endl;
	return 0;
}
