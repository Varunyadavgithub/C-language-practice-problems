//Convert Decimal to Binary...  --> 17 = 10001

#include<stdio.h>
int main(){
    int n,r,b=0,base=1;
    printf("Enter any Decimal numbers:");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        b=b+r*base;
        n=n/2;
        base=base*10;
    }
    printf("The Binary number is:%d",b);
    return 0;
}