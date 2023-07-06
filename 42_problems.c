//Copy one array elements to another.....
#include<stdio.h>
int main(){
    int a1[100],a2[100],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("First array elements:\n");
    for (int i =0; i < n ; i++)
    {
     printf("%d \n",a1[i]);
    }
    printf("Copying array elements:\n");
    for (int i = 0; i < n; i++)
    {   
        a2[i]=a1[i];
    }
    printf("Second array elements:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a2[i]);
    }
    
    return 0;
}