#include<bits/stdc++.h>
using namespace std;

int main(){
    FILE *fp1 = fopen("source.txt","r");
    FILE *fp2 = fopen("datawrite.txt","w");
    if(fp1==NULL){
        cout<<"ERROR IN OPENING FILE";
        return 0 ;
    }
    else{
        while(true){
        char ch = fgetc(fp1);
        if(ch==EOF)
        break;
        else{
            fputc(ch,fp2);
        }
    }
    }
    return 0;


}
