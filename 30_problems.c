//Calculate Simple Interest...

#include<stdio.h>
int main(){
    float amount,rate,time,SI;
    printf("Enter the amount:");
    scanf("%f",&amount);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);
    SI=(amount*rate*time)/100;
    printf("The Simple Interest is:%f",SI);
    return 0;
}