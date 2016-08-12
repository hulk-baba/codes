#include<bits/stdc++.h>
using namespace std;

int main(){
    FILE *fp = fopen("source.txt","r");
    if(fp==NULL){
        cout<<"ERROR IN OPENING FILE",return ;
    }

    while(true){
        char ch = fgetc(fp);
        if(ch==EOF)
        break;
        else
        cout<<ch;
    }
    fclose(fp);
    return 0;
}
