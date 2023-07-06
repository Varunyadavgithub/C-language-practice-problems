//Find maximum element of array.....
#include<stdio.h>
int main(){
    //a[5]=10 20 30 40 50 ---> max=50 
    int a[100],n,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter value in array: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (int i = 0; i <n; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum value of an array is: %d",max);
    return 0;
}