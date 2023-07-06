//Print array elements...

#include<stdio.h>
int main(){
    int a[5];
    printf("Enter any array elements:");
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Array elements are:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}