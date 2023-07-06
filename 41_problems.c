//Insert elements at any position of array.....
#include<stdio.h>
int main(){
    int a[100],n,item,pos;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position that you want to insert: ");
    scanf("%d",&pos);
    printf("Enter item that you want to insert: ");
    scanf("%d",&item);
    for (int i = n; i >=pos ; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=item;
    n++;
    printf("Resultant array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}