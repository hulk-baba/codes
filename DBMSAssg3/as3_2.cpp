#include <stdio.h>
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
for(i=0;i<=3;i++)
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

printf("Enter name of record to delete: ");
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
fp=fopen("stud.txt","r+");
tp=fopen("index.txt","r+");
FILE *tmp = fopen("temp.txt","w+"); 
FILE *tmp1= fopen("temp1.txt","w+");
fseek(fp,cnt*sizeof(struct student),SEEK_SET);
fseek(tp,(cnt)*strlen(s.name),SEEK_SET);
while(!feof(fp))
{
	if(fread(&s,sizeof(struct student),1,fp))
		fwrite(&s,sizeof(struct student),1,tmp);
	
}
fclose(tmp);

while(!feof(tp))
{
	if(fread(&s,strlen(s.name),1,tp))
         fwrite(&s,strlen(s.name),1,tmp1);
}
fclose(tmp1);
fseek(fp,(cnt-1)*sizeof(struct student),SEEK_SET);
fseek(tp,(cnt-1)*strlen(s.name),SEEK_SET);
fopen("temp.txt","r+");
fopen("temp1.txt","r+");
while(!feof(tmp))
{
	if(fread(&s,sizeof(struct student),1,tmp))
		fwrite(&s,sizeof(struct student),1,fp);
	
}
while(!feof(tmp1))
{
	if(fread(&s,strlen(s.name),1,tmp1))
		fwrite(&s,strlen(s.name),1,tp);
}
s = {};
strcpy(s.name,"\n ");
fwrite(&s,sizeof(struct student),1,fp);
fwrite(&s.name,strlen(s.name),1,tp);
fclose(tmp);
fclose(tmp1);
fclose(fp);
fclose(tp);
remove("temp.txt");
//rename("temp1.txt", "index.txt");
//remove("temp1.txt");

fp=fopen("stud.txt","r");
    				 //printf("The contents of %s file are :\n", "stud.txt");
 
while( ( ch ) != EOF )
 {
 	ch = fgetc(fp);
 	printf("%c",ch);
 }
 fclose(fp);
 return 0;
}
