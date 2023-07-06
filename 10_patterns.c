// A
// BC
// DEF
// GHIJ
// KLMNO

#include<stdio.h>
int main(){
    int n,count='A';
    printf("Enter the numbers of rows:");
    scanf("%d",&n);
    for (char i = 1; i <= n; i++)
    {
        for (char j = 1; j <= i; j++)
        {
            printf("%c",count);
            count++;
        }
       
        printf("\n");
        
    }
    
    return 0;
}