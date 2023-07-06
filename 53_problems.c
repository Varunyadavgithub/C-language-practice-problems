// WAP to swap two numbers using pointer...

#include<stdio.h>
int main(){
    int a,b,*p,*q,temp;
    p=&a;
    q=&b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before swaping a=%d and b=%d\n",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swaping a=%d and b=%d\n",*p,*q);
    
    return 0;
}