//Print array elements in reverse...

#include<stdio.h>
int main(){
    int a[5];
    printf("Enter any array elements:");
    for (int i = 0; i <= 4; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Reverse elements are:");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}