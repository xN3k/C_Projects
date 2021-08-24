
#include<stdio.h>

int main()
{
 int i,j, a[2][3];

 printf("Enter matrix elements:\n");
 for(i=0;i< 2;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
 }
 printf("Matrix read is:\n");
 for(i=0;i< 2;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }

}