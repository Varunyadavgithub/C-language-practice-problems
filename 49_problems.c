// WAP to print transpose of a matrix...

#include<stdio.h>
int main(){
    int mat[2][2],trans[2][2];
    printf("Enter the elements in matrix:");
    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The elements of matrix are:\n");
    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            trans[j][i]=mat[i][j];
        }
    }
    
    printf("The Transpose of matrix is:\n");
    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}