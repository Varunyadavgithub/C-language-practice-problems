//Using switch case and make a simple Calculator....

#include<stdio.h>
int main(){
    int ch;
    float a,b,c;
    printf("    !...Your Choice is...!\n1-->Addition\n2-->Subtraction\n3-->Multiplication\n-->Division\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: printf("...You choice is Addition...\n");
            printf("Enter first number:");
            scanf("%d",&a);
            printf("Enter second number:");
            scanf("%d",&b);
            c=a+b;
            printf("The addition of two numbers is:%d",c);
        break;
    case 2: printf("...You choice is Subtraction...\n");
            printf("Enter first number:");
            scanf("%d",&a);
            printf("Enter second number:");
            scanf("%d",&b);
            c=a-b;
            printf("The subtraction of two numbers is:%d",c);
        break;
    case 3: printf("...You choice is Multiplication...\n");
            printf("Enter first number:");
            scanf("%d",&a);
            printf("Enter second number:");
            scanf("%d",&b);
            c=a*b;
            printf("The multiplication of two numbers is:%d",c);
        break;
    case 4: printf("...You choice is Division...\n");
            printf("Enter first number:");
            scanf("%d",&a);
            printf("Enter second number:");
            scanf("%d",&b);
            c=a/b;
            printf("The division of two numbers is:%d",c);
        break;

    default: printf("!...Invalide choice...!!! please enter the right choice...");
        break;
    }

    return 0;
}