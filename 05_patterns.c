// *****
// *****
// *****
// *****
// *****

#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of rows:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}