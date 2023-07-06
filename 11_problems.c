//Check year is leap year or not...
#include<stdio.h>
int main(){
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%400==0 || y%4==0 && y%100!=0){
            printf("...These year %d is leap year...",y);
    }
    else{
        printf("...Sorry,These year %d is not a leap year...",y);
    }
    return 0;
}