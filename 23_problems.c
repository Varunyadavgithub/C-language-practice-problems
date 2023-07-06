// Reverse a numbers...
//for example: input  234  --->  432

#include<stdio.h>
int main(){
    int n,r,rev=0;    //rev -->  reverse and r --> reminder...
    printf("Enter any number: ");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("The reverse number is:%d",rev);
    return 0;
}