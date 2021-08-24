#include<stdio.h>
int main(){
    int a , b;
    printf("Enter two number a & b: ");
    scanf("%d%d", &a, &b);

    printf("\nAddition = %d", a+b);
    printf("\nSubstraction = %d", a-b);
    printf("\nMultiplication = %d", a*b);
    printf("\nDivision = %d", a/b);

    return 0;
}