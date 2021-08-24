#include<stdio.h>
#include<conio.h>
#include<string.h>  
struct student
{int roll;
char name[30];
}s;
 void main() {
char temp_name[30];
FILE *ptr1;
FILE *ptr2;
clrscr();
ptr1=fopen("student.txt","r");
ptr2=fopen("temp.txt","w");
printf("\n Input name to deleted:-");
gets(temp_name);
while(fscanf(ptr1,"%d%s",&s.roll,s.name)!=EOF)
{
if(strcmp(temp_name,s.name)==0)
fprintf(ptr2,"%d\t%s",s.roll,s.name);
}
fclose(ptr1);
remove("student.txt");
rename("temp.txt","student.txt");
fclose(ptr2);
getch();
} 