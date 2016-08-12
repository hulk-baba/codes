#include<stdio.h>
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
	char sname1[20];
	char sdept1[20];
	int rollnum1,srollnum1,sroll,flag=1;
	int i,j,k,roll,pos;
	FILE *f1,*f2;
	f1 = fopen("Student_Record" , "w");
	// Taking detalis of students through console
	printf("Enter details of the student \n");
	for(i=0;i<3;i++)
	{
	printf("Name : ");
	scanf("%s",std[i].name);
	printf("\n");
	
//	std[i].name[19] = "\0";
	printf("RollNumber : ");
	scanf("%d",&std[i].rollnum);
	printf("\n");
	
	printf("Department : ");
	scanf("%s",std[i].dept);
	printf("\n");

//s	std[i].dept[19] = "\0";
	// Writing into a file
	fprintf(f1,"%s %d %s\n",std[i].name,std[i].rollnum,std[i].dept);
	}
	fclose(f1);
	
	// Insertion of new record
	printf("Enter postion \n");
	scanf("%d",&pos);
	printf("Enter a New record \n");
		printf("Name : ");
	scanf("%s",sname1);
	printf("\n");
	
	printf("RollNumber : ");
	scanf("%d",&srollnum1);
	printf("\n");
	
	printf("Department : ");
	scanf("%s",sdept1);
	printf("\n");
	
	f1 = fopen("Student_Record" , "r");
	f2 = fopen("New_Student_Record" , "w");
	while(!feof(f1))
	{
		for(i=0;i<pos-1;i++)
		{
		fscanf(f1,"%s %d %s\n",name1,&rollnum1,dept1);
		fprintf(f2,"%s %d %s\n",name1,&rollnum1,dept1);
		}
		fprintf(f2,"%s %d %s\n",sname1,&srollnum1,sdept1);
		for(i=pos;i<=3;i++)
		{
		fscanf(f1,"%s %d %s\n",name1,&rollnum1,dept1);
		fprintf(f2,"%s %d %s\n",name1,&rollnum1,dept1);	
		}
	}
	fclose(f1);
	fclose(f2);
	
//	getch();
}
