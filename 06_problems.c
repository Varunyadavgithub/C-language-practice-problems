// print sum of first N natural numbers without using loop...
#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("The sum is:%d",s);
    return 0;
}