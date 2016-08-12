#include<stdio.h>
//#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollnum;
	char dept[20];
};

void main()
{
	struct student std[3];
	char name1[20];
	char dept1[20];
	int rollnum1,sroll,flag=1;
	int i,j,k,roll;
	FILE *f1,*f2;
	f1 = fopen("Student_Record" , "w");
	// Taking detalis of students through console
	printf("Enter details of the student \n");
	for(i=0;i<3;i++)
	{
	printf("Name : ");
	scanf("%s",std[i].name);
	printf("\n");
	for(j=strlen(std[i].name);j<19;j++)
	{
		std[i].name[j] =' ';
	}
//	std[i].name[19] = "\0";
	printf("RollNumber : ");
	scanf("%d",&std[i].rollnum);
	printf("\n");
	
	printf("Department : ");
	scanf("%s",std[i].dept);
	printf("\n");
	for(j=strlen(std[i].dept);j<19;j++)
	{
		std[i].dept[j] =' ';
	}
//s	std[i].dept[19] = "\0";
	// Writing into a file
	fprintf(f1,"%d %s %s\n",std[i].rollnum,std[i].name,std[i].dept);
	}
	fclose(f1);
	
    // Search for a record :: 
	// 0 , 44 , 88 
	printf("Enter roll number to search for a specific record \n");
	scanf("%d",&rollnum1);
		
	f1 = fopen("Student_Record" , "r");
	for(i=0;i<3;i++)
	{
		fseek(f1,0,SEEK_CUR);
		fscanf(f1 ,"%d %s %s",&roll,name1,dept1);
		//printf("%d %s %s\n",roll,name1,dept1);
		if(rollnum1==roll)
		{
			printf("Record Found\n");
			printf("%d %s %s \n",roll,name1,dept1);
			flag=0;
			break;
		}
		
	
	
	}
	
	if(flag==1)
	{
		printf("Record not found\n");
	}
	fclose(f1); 
//	getch();
}
