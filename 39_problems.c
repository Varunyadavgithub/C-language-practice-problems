//Insert elements at the beginning of array.....
#include<stdio.h>
int main(){
    int a[100],n,item;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Insert elements in array at the begining: ");
    scanf("%d",&item);
    n++;
    for (int i = n; i > 1; i--)
    {
        a[i-1]=a[i-2];
    }
    a[0]=item;   
    printf("Resultant array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}