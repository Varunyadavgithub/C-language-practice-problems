// Calculate sum between two numbers...
#include<stdio.h>
int main(){
    int n1,n2,s=0;
    printf("The first number:");
    scanf("%d",&n1);
    printf("The last number:");
    scanf("%d",&n2);
    while(n1<=n2){
        s=s+n1;
        n1++;

    }
    printf("The sum is:%d",s);
    return 0;
}