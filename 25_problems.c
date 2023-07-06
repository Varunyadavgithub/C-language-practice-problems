//Find Sum of Digits of a Numbers...
//input 123 ---> 1+2+3=6

#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter any numbers:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sun of the number of digits is %d",sum);
    return 0;
}