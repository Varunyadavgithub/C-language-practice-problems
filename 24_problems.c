//Count the number of Digits in a Numbers...

#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter any numbers:");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("The total number of digits is %d",count);
    return 0;
}