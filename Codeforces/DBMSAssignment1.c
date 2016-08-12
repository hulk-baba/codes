#include<stdio.h>

void main(){
    FILE *fp = fopen("data.txt","r");
    char ch;
    if(fp==NULL){
    printf("Error in Opening file\n");
    return;
    }
    while(1){
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);

}
