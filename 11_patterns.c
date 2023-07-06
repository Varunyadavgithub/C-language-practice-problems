// A
// BB
// CCC
// DDDD
// EEEEE

#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of rows:");
    scanf("%d",&n);
    for (char i = 1; i <= 69; i++)
    {
        for (char j = 65; j <= i; j++)
        {
            printf("%c",i);
        }
       
        printf("\n");
        
    }
    
    return 0;
}