// Short array elements in Descending order....
#include<stdio.h>
int main(){
    //a[5] = 2 1 3 4 5 ----> 1 2 3 4 5
    int a[5],temp;
    printf("Enter array elements: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; 
           } 
        }
    }
    printf("Array elements are:");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}