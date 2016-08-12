#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    char ch;
    FILE *fp = fopen("write.txt","w");
    while(1){
        scanf("%c",&ch);
        if(ch=='\n')
        break;
        else
        fputc(ch,fp);
    }
    return 0;


}
