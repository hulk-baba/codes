#include <stdio.h>

int main ()
{
   FILE *fp;
   char string[25];
   int x;
   fp = fopen("data.txt","r+");
   printf("Enter the position at which you want to insert.\n");
   scanf("%d",&x);
   fseek( fp, x, SEEK_SET );
   printf("Enter the string which you want to insert.\n");
   scanf("%s",string);
   fputs(string, fp);
   fclose(fp);
   printf("Operation Successful.\n");
   return 0;
}
