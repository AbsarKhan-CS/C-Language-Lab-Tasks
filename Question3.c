#include <stdio.h>
int main(){
    int Amount1;
    float Amount2 , Total;
    
    printf("Enter Integer Value : ");
    scanf("%d", &Amount1);
    printf("Enter Float Value : ");
    scanf("%f", &Amount2);

    Total = Amount1 + Amount2;
    printf("Total Amount : %.2f\n", Total);


    return 0;
}