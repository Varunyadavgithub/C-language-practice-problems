//Print Day of Week using switch case...

#include<stdio.h>
int main(){
    int ch;
    printf("Enter your Choice...!:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:printf("Monday");
        break;
    case 2:printf("Tuesday");
        break;  
    case 3:printf("Wednesday");
        break;   
    case 4:printf("Thursday");
        break;
    case 5:printf("Friday");
        break;
    case 6:printf("Saturday");
        break;
    case 7:printf("Sunday");
        break;
    default:printf("!...Invalide choice...!!! please enter the right choice....");
        break;
    }
    return 0;
}