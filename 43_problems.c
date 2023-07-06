//Calculate sum of array elements.....
#include<stdio.h>
int main(){
    //a[5]=10 20 30 40 50 ---> 150
    int a[5],sum=0;
    printf("Enter elements in array:\n");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sum of array is:\n");
    for (int i =0; i < 5 ; i++)
    {
        sum=sum+a[i];
    }
     printf("%d ",sum);
    return 0;
}