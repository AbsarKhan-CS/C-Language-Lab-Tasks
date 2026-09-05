#include <stdio.h>
int main(){
    int Age;
    float Height; 
    char Grade; 

    printf("Enter Your Age : ");
    scanf("%d", &Age);
    printf("Enter Your Height : ");
    scanf("%f", &Height);
    printf("Enter Your Grade : ");
    scanf(" %c", &Grade);
    
    
    
    printf("Your Age : %d\n", Age);
    printf("Your Height : %.2f\n", Height);
    printf("Your Grade : %c\n", Grade);
    return 0;
}