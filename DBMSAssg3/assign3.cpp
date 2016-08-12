#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct detail
{
	char rollno[10];
	char name[15];
	float cgpa;
}student,student1;
int counter=0;

void read()
{
	FILE *fp;
	char t;
	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("could not open file\n");
		return;
	}
	else
	{
		int i=0;
		while(!feof(fp))
		{
			t=fgetc(fp);
			if(t=='!')
			{
				printf(" ");
			}
			else
			{
				printf("%c",t);
			}
			i++;
		}
		if(i==1)
		{
			printf("no data to display\n");
		}
		fclose(fp);
	}
}

void insert()
{
	int n;
	char temp;
	FILE *fp;
	fp=fopen("student.txt","a+");
	int i=0;
	while(!feof(fp))
	{
		fscanf(fp,"%c",&temp);
		i++;
	}
	if(i<=2)
	{
		rewind(fp);
		printf("rollno:");
		scanf("%s",&student.rollno);
		fflush(stdin);
		printf("name:");
		scanf("%s",&student.name);
		fflush(stdin);
		printf("cgpa:");
		scanf("%f",&student.cgpa);
		fflush(stdin);
		int j;
		
		for(j=0;j!=15;j++)
		{
			if(student.name[j]=='\0')
			{
				student.name[j]='!';
			}
		}
		
		fprintf(fp,"%s\n%s\n%0.2f\n",student.rollno,student.name,student.cgpa);

	}
	else
	{
		rewind(fp);
		i=0;
		while(!feof(fp))
		{
			fscanf(fp,"%c",&temp);
			i++;
		}
	//	printf("Enter the location on which the record to be inserted:");
	//	scanf("%d",&n);
	//	printf("%d\n%d\n",i/30,i);
		
		if((i/30+1)<(n))
		{
			printf("wrong input\n");
			fclose(fp);
			return;
		}
	
		printf("rollno:");
		scanf("%s",&student.rollno);
		fflush(stdin);
		printf("name:");
		scanf("%s",&student.name);
		fflush(stdin);
		printf("cgpa:");
		scanf("%f",&student.cgpa);
		fflush(stdin);
		int j;
		
		for(j=0;j!=15;j++)
		{
			if(student.name[j]=='\0')
			{
				student.name[j]='!';
			}
		}
		rewind(fp);
	//	fseek(fp,n*30,SEEK_SET);
		fprintf(fp,"%s\n%s\n%0.2f\n",student.rollno,student.name,student.cgpa);
	}
	fclose(fp);
	FILE *fp1;
	char count;
	fp1=fopen("index.txt","a+");
	rewind(fp1);
	counter=0;
	while(!feof(fp1))
	{
		fscanf(fp,"%c",&count);
		if(count=='\n')
		{
			counter++;
		}
	}
	if(counter==0)
	{
		counter=1;
	}
//	printf("%d\n",counter);
	fprintf(fp,"%d%s\n",counter,student.rollno);
	fclose(fp);
}


void search()
{
	char roll[10];
	int index=0;
	printf("enter the rollno to be searched:");
	scanf("%s",&roll);
	fflush(stdin);
	FILE *fp1;
	fp1=fopen("index.txt","r");
	if(fp1==NULL)
	{
		printf("could not open file\n");
		return;
	}
	else
	{
		while(!feof(fp1))
		{
			fscanf(fp1,"%d",&index);
			fscanf(fp1,"%s\n",&student.rollno);
		//	printf("%s\n",student.rollno);
			if(strcmp(roll,student.rollno)==0)
			{
				printf("data found\n");
			//	printf("%d\n",index);
				break;
			}
			
		}
		if(index == 0)
		{
			printf("data not found\n");	
		}
		
	}
	fclose(fp1);
	
	FILE *fp;
	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("could not open file\n");
		return;
	}
	else
	{
		int t,j;
		char temp;
	//	printf("%d\n",index);
	//	rewind(fp);
		fseek(fp,(index-1)*32,SEEK_SET);
	//	for(t=0;t<index-1;t++);
	//	{
	//		fseek(fp,31,SEEK_CUR);
	//	}
		fscanf(fp,"%s\n",&student1.rollno);
		printf("%s\n",student1.rollno);
		if(strcmp(roll,student1.rollno)==0)
		{
			for(j=0;j!=15;j++)
			{
				fscanf(fp,"%c",&temp);
				if(temp=='!')
				{
					student1.name[j]=' ';
				}
				else
				{
					student1.name[j]=temp;
				}
			}
			fscanf(fp,"\n%f",&student1.cgpa);
			printf("%s\t%s\t%f\n",student1.rollno,student1.name,student1.cgpa);
		}
	}
		fclose(fp);
}

void del()
{
	char roll[10];
	int flag1=0;
	struct detail student[10];
	printf("enter the rollno to be deleted:");
	scanf("%s",&roll);
	fflush(stdin);
	FILE *fp;
	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("could not open file\n");
		return;
	}
	else
	{
		int i=0,j;
		char temp;
		while(!feof(fp))
		{
			fscanf(fp,"%s\n",&student[i].rollno);
			if(strlen(student[i].rollno)!=8)
			{
				break;
			}
		//	printf("%d\n",strlen(student[i].rollno));
		//	printf("%s\n",student[i].rollno);
			if(strcmp(roll,student[i].rollno)==0)
			{
				if(flag1==0)
				{
					fseek(fp,21,SEEK_CUR);
					flag1=1;
					i=i-1;
				}
				else
				{
					break;
				}
			}
			else
			{
				for(j=0;j<15;j++)
				{
					fscanf(fp,"%c",&temp);
				//	printf("%c\n",temp);
					if(temp=='!')
					{
						student[i].name[j]='!';
					}
					else
					{
						student[i].name[j]=temp;		
					//	printf("%s\n",student[i].name);	
					}
					if(j==14)
					{
						student[i].name[j] = '\0';
					}
				}
				//printf("%s\n",student[i].name);
				fscanf(fp,"\n%f",&student[i].cgpa);
			//	printf("%s\t%s\t%f\n",student[i].rollno,student[i].name,student[i].cgpa);
			}
				i++;
			printf("%d\n",i);
		}
		int temp1=i;
		
		fclose(fp);
		FILE *fp1;
		fp1=fopen("student.txt","w");
		if(fp1==NULL)
		{
			printf("could not open file\n");
			return;
		}
		else
		{
			for(i=0;i<temp1;i++)
			{
				for(j=0;j!=15;j++)
				{
					if(student[i].name[j]==' ')
					{
						student[i].name[j]='!';
					}
				}
				
				//	printf("%s\t%s\t%f\n",student[i].rollno,student[i].name,student[i].cgpa);
				fprintf(fp1,"%s\n%s\n%0.2f\n",student[i].rollno,student[i].name,student[i].cgpa);
			}
		}
		fclose(fp1);
	}
		
		
		
			
		FILE *fp1;
		int i=0;
		int flag=0;
		int index[10];
		struct detail student1[10];
		fp1=fopen("index.txt","r");
		if(fp1==NULL)
		{
			printf("could not open file\n");
			return;
		}
		else
		{
			while(!feof(fp1))
			{
				fscanf(fp1,"%d",&index[i]);
				fscanf(fp1,"%s\n",&student[i].rollno);
			
				if(strcmp(roll,student[i].rollno)==0)
				{
					flag=1;
					continue;
				}
				i++;
			}
				if(flag==0)
				{
					printf("data not found\n");
				}
			
				
		}
		fclose(fp1);
		
		int j;
		j=i;
		fp1=fopen("index.txt","w+");
		for(i=0;i<j;i++)
		{
			
			fprintf(fp1,"%d%s\n",i+1,student[i].rollno);
		}
		fclose(fp1);
		return;
	
	
	
	
	

}
int main()
{
	int n;
	do
	{
		printf("Enter any no. of the following according to the operations to be performed\n1.read record from the file\n2.insert record to the file\n3.to search speific record.\n4.to delete specific record\n5.To exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1 :
				read();
				break;
			case 2 :
				insert();
				break;
			case 3 :
				search();
				break;
			case 4 :
				del();
				break;
			case 5 :
				break;
			default :
				n=0;
				printf("Invalid input\n");
				break;
		}
	}while(n!=6&&n);
}

