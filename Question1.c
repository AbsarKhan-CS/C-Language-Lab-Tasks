#include <stdio.h>
int main(){
    int Age = 19;
    float Height = 5.7;
    double Salary = 25000.75;
    char Grade = 'A';

    printf("Integer Value : %d\n", Age);
    printf("Float Value : %.2f\n", Height);
    printf("Double Value : %.2lf\n", Salary);
    printf("Char Value : %c\n", Grade);
    return 0;
}