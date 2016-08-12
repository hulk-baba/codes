#include<stdio.h>

void Delete()
{
	char str[25];
	FILE *fp,*fs;
	printf("Enter the name of the student.\n");
	scanf("%s",str);
	int y=1,x;
	char s1[25];
	fp = fopen("data.txt","r");
	while(fscanf(fp,"%s %d",s1,&x)!=EOF)
	{
		if(!strcmp(s1,str))
		{
			break;
		}
		y++;
	}
	rewind(fp);
	fs=fopen("New.txt","w");
	int z=1;
	while(fscanf(fp,"%s %d",s1,&x)!=EOF)
	{
		if(z!=y)
		{
			fprintf(fs,"%s %d",s1,x);
		}
		z++;
	}
	fclose(fp);
	fclose(fs);
	remove("data.txt");
	rename("New.txt","data.txt");

}
int main(){
    Delete();
    printf("Operational Successful\n");
    return 0;
}
