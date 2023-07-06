//Make calculator without using switch case...
#include<stdio.h>
int main(){
    int a,b,ch;
    int add,sub,mult,div,mod;
    printf("1-add\n2-sub\n3-mult\n4-div\n5-mod\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    if(ch==1){
        add=a+b;
        printf("The sum is %d",add);
    }
    else if (ch==2)
    {   
       sub=a-b;
       printf("The sub is %d",sub);
    }
    else if (ch==3)
    {
        mult=a*b;
        printf("The mult is %d",mult);
    }
    else if (ch==4)
    {
        div=a/b;
        printf("The div is %d",div);
    }
    else if (ch==5)
    {
        mod=a%b;
        printf("The mod is %d",mod);
    }
    
    else{
        printf("... You enter Wrong choice...");
    }
    return 0;
}