// Print all the Prime numbers between two numbers....
/* A Prime number is a number which can divided exactly only by itself and 1.
    for example 7,17,41,etc...*/

#include<stdio.h>

int isPrime(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main(){
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);

    printf("Enter last number: ");
    scanf("%d",&n2);

    printf("The Prime numbers between %d and %d are:\n",n1,n2);
    for (int i = n1; i < n2; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n",i);
        }
        
    }
    

    return 0;
}