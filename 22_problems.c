// Check number is Perfect or not...
//a positive integer that is equal to the sum of its proper divisors. 
/* for example: 6 -> 1,2,3,4,5,6
                  1,2,3 are proper divisor of 6 and the all are equal to 1+2+3=6 */

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        if(n%i==0){
        sum=sum+i;
        }
    }
    if(sum==n)
    printf("The number is perfect");
    else
    printf("the number is not perfect");
    return 0;
}