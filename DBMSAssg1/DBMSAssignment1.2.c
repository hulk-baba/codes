#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[25];
    int rollno;
};

struct student s1;
int main(){
    FILE *fp = fopen("data.txt","w");
    if(fp == NULL)
    printf("Some Error Occured in Opening File \n");
    else{
        printf("Enter Name and Roll No\n");
        scanf("%s %d",s1.name,&s1.rollno);
        fputs("",fp);
        fprintf(fp,"%s %d\n",s1.name,s1.rollno);
        fclose(fp);

    }
    return 0;

}
