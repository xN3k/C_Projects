#include<stdio.h>
int main(){
    int a, b;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    if(a<b){
        printf("%d is Bigger number", b);
    }
    else{
        printf("%d Is biggest number", a);
    }
    return 0;
}