//Calculator total and average marks of 5 subjects...
#include<stdio.h>
int main(){
    int marks,phy,che,mat,eng,mus,total;
    double avg;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&phy,&che,&mat,&eng,&mus);

    total=(phy+che+mat+eng+mus);
    printf("The total marks is %d\n",total);

    avg=total/5;
    printf("The average marks is: %lf",avg);
    return 0;

}