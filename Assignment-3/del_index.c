#include<stdio.h>
#include<conio.h>

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
	int rollnum1,sroll,flag;
	int i;
	FILE *f1,*f2,*f3,*f4;
	f1 = fopen("Student_Record_Old" , "w");
	f2 = fopen("Student_Record_Old_Index" , "w");
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
	}
	fclose(f1);
	fclose(f2);
	// Deleting a record
	printf("Enter a roll number to delete that record \n");
	scanf("%d",&sroll);
	f1 = fopen("Student_Record_Old" , "r");
	f2 = fopen("Student_Record_Old_Index" , "r");
	f3 = fopen("New_Student_Record" , "w");
	f4 = fopen("New_Student_Record_Index" , "w");
	while(!feof(f1))
	{
		fscanf(f1,"%s %d %s\n",name1,&rollnum1,dept1);
		if(rollnum1!=sroll)
		{
			
			fprintf(f3,"%s %d %s\n",name1,&rollnum1,dept1);
			fprintf(f4,"%d %s\n",rollnum1,name1);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fclose(f4);
	getch();
}
