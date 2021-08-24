#include <stdio.h>
 
int main()
{
   FILE *fp;
   char ch;
   char *filename = "file_append.txt";
   char *content = "This text is appeneded later to the file, using C programming.";
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename); 
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp); 
   fp = fopen(filename, "a");
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
   return 0;
}