// WAP to print first N antural number using recursion...

#include<stdio.h>

void natural(int n){        //n=1
    if(n<=10){
        printf("%d ",n);
        natural(n+1);
    }
}
int main(){
    int n=1;
    natural(n);     //function call...
    return 0;
}