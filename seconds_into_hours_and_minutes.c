#include<stdio.h>
int main(){
    int seconds, hours, minutes;

    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    hours = minutes / 60;

    printf("Minutes = %d", minutes);
    printf("\nHours = %d", hours);

    return 0;

}