// WAP to Add two numbers using pointer...

#include<stdio.h>
int main(){
    int a,b,*p,*q,sum=0;
    p=&a;
    q=&b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=*p+*q;
    printf("The sum of a and b is:%d ",sum);
 
    return 0;
}