//Print multiplication table...

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number which you want to print table:");
    scanf("%d",&n);
    printf("The Table is...\n");
    for (int i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}