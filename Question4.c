#include <stdio.h>
int main(){

    float Marks1, Marks2, Marks3;
    float Percentage, Total;

    printf("Enter Marks1 : ");
    scanf("%f", &Marks1);
    printf("Enter Marks2 : ");
    scanf("%f", &Marks2);
    printf("Enter Marks3 : ");
    scanf("%f", &Marks3);
   
   Total = Marks1 + Marks2 + Marks3;
   Percentage = (Total/300)*100;
   
   printf("Total Marks : %.2f\n", Total);
   printf("Percentage : %.2f%%\n", Percentage);
   
   return 0;
}