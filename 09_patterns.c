// 1
// 23
// 456
// 78910


#include<stdio.h>
int main(){
    int n,count=1;
    printf("Enter the numbers of rows:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",count);
            count++;
        }
       
        printf("\n");
        
    }
    
    return 0;
}