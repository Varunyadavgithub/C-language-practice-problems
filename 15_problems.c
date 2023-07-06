//Calculator tax on a salary...
#include<stdio.h>
int main(){
    int sal;
    double tax;
    printf("Enter Salary of person:");
    scanf("%d",&sal);
    if(sal<=10000){
        printf("...NO Tax...");
    }
    else if (sal>10000& & sal<100000)
    {   
       tax=sal*0.10;
       printf("The tax is %lf",tax);
    }
    else if (sal>100000 && sal<1000000)
    {
        tax=sal*0.25;
        printf("The tax is %lf",tax);
    }
    else{
        tax=sal*40;
        printf("The tax is %lf",tax);
    }
    return 0;
}