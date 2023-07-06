// WAP to swap two matrices using 2D array...

#include<stdio.h>
int main(){
    int a[2][2],b[2][2],temp[2][2];
    printf("Enter the value of first matrix:");
    for( int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the value of second matrix:");
    for( int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("!...Before swaping the matrix...!\n");
    printf("First matrix:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    
    printf("!...After swaping the matrix...!\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            temp[i][j]=a[i][j];
            a[i][j]=b[i][j];
            b[i][j]=temp[i][j];
        }
    }
    printf("First matrix is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}