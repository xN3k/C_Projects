#include<stdio.h>
int main (){
    char name[20];
    int age;
    float salary;

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Name: %s", name);
    printf("\nAge: %d", age);
    printf("\nSalary: %f", salary);

return 0;
}