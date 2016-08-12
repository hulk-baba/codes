#include<stdio.h>


int main()
{

	int pos,no,temp=0;

	char line[50],ch;

	FILE *p,*q;

	printf("\nEnter a line that you want to insert: ");
	gets(line);

	p=fopen("data2.txt","w+");

	fputs(line,p);


	printf("\nEnter the position from where you wish to delete: ");
	scanf(" %d",&pos);

	printf("\nEnter the number of characters you want to delete: ");
	scanf("%d",&no);



	q=fopen("temporary.txt","w");

	rewind(p);

	while(temp!=pos)
	{
		ch=fgetc(p);

		fputc(ch,q);

		temp++;
	}

	fseek(p,pos+no,SEEK_SET);

	while(ch!=EOF)
	{
		ch=fgetc(p);

		fputc(ch,q);
	}

	fclose(p);
	fclose(q);

	remove("data2.txt");
	rename("temporary.txt","data2.txt");
	return 0;
}
