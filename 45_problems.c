//Find minimum element of array.....
#include<stdio.h>
int main(){
    //a[5]=10 20 30 40 50 ---> min=10
    int a[100],n,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter value in array: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (int i = 0; i <n; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Maximum value of an array is: %d",min);
    return 0;
}