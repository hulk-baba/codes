#include<stdio.h>

using namespace std;

struct Student{
    char name[100];
    int adm;
}s[1000];

int main(){
    FILE *fp;
    char ch;
    fp = fopen("data.txt","r");
    while(1){
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
