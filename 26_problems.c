//Check number is Palindrome or not...
/*A palindromic number (also known as a numeral palindrome or a numeric palindrome)
 is a number (such as 16461) that remains the same when its digits are reversed (16461).*/

// For example: 121 --> 121

#include<stdio.h>
int main(){
    int n,r,sum=0,c;
    printf("Enter any numbers:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(c==sum)
    printf("This is Palindrom number");
    else
    printf("This is not a Palindrom number");
    return 0;
}