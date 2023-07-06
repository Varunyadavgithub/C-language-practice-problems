//Check person is eligible for Vote or not...
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>18){
        printf("...You are eligible for vote...");
    }
    else{
        printf("...Sorry, You are not eligible for vote...");
    }
    return 0;
}