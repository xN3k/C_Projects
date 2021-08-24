#include<stdio.h>
int main(){
    float p, t, r;

    printf("Enter Principle: ");
    scanf("%f", &p);
    printf("Enter Time: ");
    scanf("%f", &t);
    printf("Enter rate: ");
    scanf("%f", &r);
    
    printf("\nSimple Interest = %f", p*t*r/100);

return 0;
}