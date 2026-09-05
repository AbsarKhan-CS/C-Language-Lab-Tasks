#include <stdio.h>
int main(){
    double basicSalary , bonus, totalSalary;
    printf("Enter basic Salary : ");
    scanf("%lf", &basicSalary);

    printf("Enter bonus : ");
    scanf("%lf", &bonus);

    totalSalary = basicSalary + bonus;

    printf("Total Salary: %.2f\n", totalSalary);


    return 0;
}