// WAP to print matrix using array...

#include<stdio.h>
int main(){
    int mat[2][2];
    printf("Enter matrix elements:");
    for (int  i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&mat[i][j]);
        } 
    }

    printf("Matrix elements are:\n");
    for (int  i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",mat[i][j]);
        } 
        printf("\n");
    }
    
    
    return 0;
}