// ABCDE
// ABCD
// ABC
// AB
// A

#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of rows:");
    scanf("%d",&n);
    for (char i = n; i >= 1; i--)
    {
        for (char j = 1; j <= i; j++)
        {
            printf("%c",64+j);
        }
       
        printf("\n");
        
    }
    
    return 0;
}