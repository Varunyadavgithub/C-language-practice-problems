// Check number is Prime or not....
/* A Prime number is a number which can divided exactly only by itself and 1.
    for example 7,17,41,etc...*/

#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            count++;
        }
    }
        if(count==2)
        printf("Prime number");
        else
        printf("Not a Prime number");
    return 0;
}