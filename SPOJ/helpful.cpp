#include<bits/stdc++.h>

using namespace std;
int main(){
    char ch[100];
    scanf("%s",ch);
    int l = strlen(ch);
    char ch2[100];
    int j=0;
    for(int i=0;i<l;i+=2){
        ch2[j] = ch[i];
        j++;
    }
    int l2 = strlen(ch2);
    sort(ch2,ch2+l2);
    for(int i=0;i<l2;i++){
        if(i!=l2-1)
        cout<<ch2[i]<<"+";
        else
        cout<<ch2[i];
    }
    return 0;
}
