//Calculate Compound Interest...

#include<stdio.h>
#include<math.h>
int main(){
    float p,rate,time,CI;
    printf("Enter the Principal amount:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);
    CI=p*((pow((1+rate/100),time)));
    printf("The Compound Interest is:%f",CI);
    return 0;
}