#include<stdio.h>
int main(){
    int a, b, c;

    printf("Enter first Number: \n");
    scanf("%d", &a);
    printf("Enter second Number: \n");
    scanf("%d", &b);
    printf("Enter third Number: \n");
    scanf("%d", &c);

    printf("The average of three number = %d", a+b+c/3);
    
return 0; 
}