//Insert elements at the  ending position of array.....
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
    printf("Insert elements in array at the ending: ");
    scanf("%d",&item);
    n++;
    a[n-1]=item;
    printf("After insertion element at the ending of array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}