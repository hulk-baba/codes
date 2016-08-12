#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("data.txt","r");
    char ch;
    if(fp==NULL){
        printf("Error in opening the read file\n");
    }
    else{
        FILE *fs = fopen("writefile.txt","w");
        while(1){
           ch = fgetc(fp);
           if(ch==EOF)
           break;
           else
           fputc(ch,fs);

        }
        fclose(fp);
        fclose(fs);
    }
    return 0;
}
