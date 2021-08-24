#include<stdio.h>
int main(){
    int a, b, c;

    printf("Enter two number: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a<b && c< b)
        printf("%d is greatest number among all", b);
    else if (b<a && c<a)
        printf("%d is greatest number among all", a);
    else
    printf("%d is greatest number among all", c);
    return 0;
}