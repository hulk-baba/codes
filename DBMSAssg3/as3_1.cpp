#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//long filesize(FILE *stream);

struct student
{
	int roll;
	char name[20];
}s;


int main()
{
	FILE *fp, *tp;
int i=0;
int ch;
int cnt;
char cname[20];
fp=fopen("stud.txt","w");
tp=fopen("index.txt","w");
for(i=0;i<=1;i++)
{
printf("\nenter name : ");
scanf("%s",s.name);
printf("\nenter roll : ");
scanf("%d",&s.roll);
fwrite(&s,sizeof(struct student),1,fp);
fwrite(&s.name,strlen(s.name),1,tp);
fprintf(tp,"\n");
}
fclose(fp);
fclose(tp);
cnt=0;
char x[10];
                     printf("Enter name of record to search: ");
			         scanf("%s",cname);
			         tp=fopen("index.txt","r");
			         while(!feof(tp))
			         {
                          cnt++;
                         fscanf(tp,"%s",x);
                         
       					 if(strcmp(x,cname)==0)
                                               break;
                     }
                     printf("count= %d",cnt);
                     fclose(tp);
                     fp=fopen("stud.txt","r");
                     fseek(fp,(cnt-1)*sizeof(struct student),SEEK_SET);
if(fread(&s,sizeof(struct student),1,fp)==1)
{
printf("\nrecord found");
printf("\nName = ");
printf("%s\n",s.name);
printf("Roll = ");
printf("%d",s.roll);
}
else
    printf("\nrecord not found");
fclose(fp);
return 0;
}
