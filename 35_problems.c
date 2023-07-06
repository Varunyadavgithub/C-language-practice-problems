/*Using switch case Print --> First N natural number
                          --> Sum of two numbers
                          --> factorial of any number  */

#include<stdio.h>
int main(){
    int a,b,n,f=1,ch,sum=0;
    printf("    !...Your Choice is...!\n1-->First N natural number\n2-->Sum of two numbers\n3-->factorial of any number\n\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: printf("...You choice to print First N natural number...\n");
            printf("Enter any number:");
            scanf("%d",&n);
            for (int i = 1; i <= n; i++)
            {
                printf("%d\n",i);
            }
        break;
    case 2: printf("...You choice to print Sum of two numbers...\n");
            printf("Enter first number:");
            scanf("%d",&a);
            printf("Enter second number:");
            scanf("%d",&b);
            sum=a+b;
            printf("The sum is:%d",sum);
        break;
    case 3: printf("...You choice to print factorial of any number...\n");
            printf("Enter any number:");
            scanf("%d",&n);
            for (int i = 1; i <= n; i++)
            {
                f=f*i;
            }
            printf("The factorial is:%d",f);
        break;

    default: printf("!...Invalide choice...!!! please enter the right choice...");
        break;
    }

    return 0;
}