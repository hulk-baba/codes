#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct student
{
	char name[20];
	int rollnum;
	char dept[20];
};




int main()
{
	struct student std[3];
	char name1[20];
	char dept1[20];
	char sname[20];
	int rollnum1,flag=1,roll,i;
	FILE *f1,*f2;
	
	f1 = fopen("Student_Record" , "w");
	f2 = fopen("Student_Record_Index_File" , "w");
	// Taking detalis of students through console
	printf("Enter details of the student \n");
	for(i=0;i<3;i++)
	{

	printf("Name : ");
	scanf("%s",std[i].name);
	printf("\n");
	
	printf("RollNumber : ");
	scanf("%d",&std[i].rollnum);
	printf("\n");
	
	printf("Department : ");
	scanf("%s",std[i].dept);
	printf("\n");
	
	
	// Writing into a file
	fprintf(f1,"%s %d %s\n",std[i].name,std[i].rollnum,std[i].dept);
	fprintf(f2,"%d %s\n",std[i].rollnum,std[i].name );
	}
	fclose(f1);
	fclose(f2);
	
	// Search for a record 
	printf("Enter your roll number to check the existence of your record \n ");
	scanf("%d",&roll);
	
	f2 = fopen("Student_Record_Index_File" , "r");
	while(!feof(f2))
	{
		fscanf(f2,"%d %s",&rollnum1,name1);
		if(rollnum1==roll)
		{
			printf("\nRecord Found");
			printf("\nName of the student is : %s",name1);
			flag=0;
			break;
		}
	}
	if(flag!=0)
	{
		printf("Such a record doesn't exit\n");
	}
	fclose(f2);
	
	//getch();
}
