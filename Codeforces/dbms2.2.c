#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[30];
    char roll[12];
}st;
int main(){
    FILE *fp;
    int i;
    fp  =fopen("data.txt","w");
    if(fp == NULL){
        printf("Error opening file\n");
        return 0;
    }
    for(i=0;i<=3;i++){
        printf("Enter name: ");
        scanf("%s",&st.name);
        printf("Enter ROllno: ");
        scanf("%s",&st.roll);
        fwrite(&st,sizeof(struct student),1,fp);

    }
    fclose(fp);
    int x;
    printf("Enter record no\n");
    scanf("%d",&x);
    fp = fopen("data.txt","r");
    if(fp==NULL){
    printf("Error opening file\n");
    return 0;

    }
    fseek(fp,(x-1)*sizeof(struct student),SEEK_SET);
    if(fread(&st,sizeof(struct student),1,fp) == 1){
        printf("Name\n%s",st.name);
        printf("RollNo%s",st.roll);
    }
    fclose(fp);
    return 0;
}
