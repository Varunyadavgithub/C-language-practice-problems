//Find maximum number between two numbers...
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number 1:");
    scanf("%d",&a);
     printf("Enter number 2:");
    scanf("%d",&b);
    if(a>b){
            printf("...The number %d is maximum...",a);
    }
    else{
        printf("...The number %d is maximum...",b);
    }
    return 0;
}