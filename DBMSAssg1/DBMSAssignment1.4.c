#include<stdio.h>
#include<stdlib.h>

int Search(){
    FILE *fp;
    int x;
    int y=1;
    char str[25];
    printf("Enter the name of the student.\n");
    scanf("%s",str);
    char s1[25];
    fp = fopen("data.txt","r");
    while(fscanf(fp,"%s",s1) != EOF)
    {
        if(!strcmp(s1,str))
        {
            y=0;
            fclose(fp);
            return y;
        }
    }
    fclose(fp);
    return y;
}
int main(){
    int y = Search();
    if(y)
    printf("Not Present\n");
    else
    printf("Data is Present\n");
    return 0;
}

