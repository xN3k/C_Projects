#include<stdio.h>
int main(){
    int b, h;
    int area;

    printf("Enter breadth: \n");
    scanf("%d", &b);
    printf("Enter height: \n");
    scanf("%d", &h);
    area = 1/2*b*h;
    printf("The area of triangle: %d", area);
return 0;
}