#include<stdio.h>

int main(){
    FILE *fp = fopen("source.txt","r");
    if(fp==NULL){
       printf("ERROR IN OPENING FILE");
       return ;}

    while(1){
        char ch = fgetc(fp);
        if(ch==EOF)
        break;
        else
        printf("%c",ch);
        }
    fclose(fp);
    return 0;
}
