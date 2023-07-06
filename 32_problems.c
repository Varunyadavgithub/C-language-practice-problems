//Calculate Profit and Loss...

#include<stdio.h>
int main(){
    int Sp,Cp,p,l;
    printf("Enter the Selling price:");
    scanf("%d",&Sp);
    printf("Enter the Cost price:");
    scanf("%d",&Cp);
    p=Sp-Cp;
    l=Cp-Sp;
    if(Sp==Cp)
        printf("No any profit and loss");
    else if (Sp>Cp)
        printf("Profit = %d",p);
    else
        printf("Loss = %d",l);
    return 0;
}