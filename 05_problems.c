// print sum of first N natural numbers...
#include<stdio.h>
int main(){
    int n1,n2,s=0;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++){
        s=s+i;
    }
     printf("The sum is:%d",s);
    return 0;
}