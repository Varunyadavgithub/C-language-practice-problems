/*What is Armstrong of a number...?

An Armstrong number is one whose sum of digits raised to the power three equals the number itself.
371, for example, is an Armstrong number because 3*3*3 + 7*7*7 + 1*1*1 = 371*/

#include<stdio.h>
int main(){
    int n,r,arm=0,c;
    printf("Enter any numbers:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    printf("This is Armstrong number");
    else
    printf("This is not a Armstrong number");
    return 0;
}