#include<stdio.h>
#include<string.h>

struct emp
{
 int empno;
 char ename[20];
 int sal;
 long int phno;
};
int main()
{
 struct emp x;
 FILE *p;
 int n,i,t,rec;
 char choice[1];
 p=fopen("employee.txt","wb+");   /* opening the file in binary write/read mode*/
 printf("How many records?");
 scanf("%d",&n);
 printf("Enter %d records:\n",n);
 for(i=1;i<=n;i++)
 {
   printf("\n\nEmpno:");
   scanf("%d",&x.empno);
   printf("Name:");
   scanf("%s",x.ename);
   printf("Salary:");                       /* Accepting the data from keyboard*/
   scanf("%d",&x.sal);
   printf("Phone No:");
   scanf("%ld",&x.phno);
   fwrite(&x,sizeof(x),1,p);             /* Writing objects onto the file*/
 }
 printf("Press any key to continue....\n");
 getchar();                                     /* To wait for user confirmation*/
 while(1)
 {
   printf("\nEnter the record number:");
   scanf("%d",&rec);                           /* Accepting record number */
   if(rec<1||rec>n)                            /* Checking for validity of record number*/
    printf("Search failure...");
   else
   {
    fseek(p,(rec-1)*sizeof(x),0);   /* placing record pointer to the required record*/
    fread(&x,sizeof(x),1,p);               /* Reading the record*/
    printf("Empno:%d\nName:%s\nSalary:%d\nPhno:%ld",x.empno,x.ename,x.sal,x.phno); /* Printing the record*/
 }
 printf("\nWant to continue...y/n:");   /* accepting confirmation to continue*/
 scanf("%s",choice);
 if(strcmp(choice,"n")==0)
   break;
}
fclose(p);
return 0;
}
