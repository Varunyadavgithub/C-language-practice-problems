// WAP to make a simple Function program...

#include<stdio.h>

void add(){
    int a=10,b=20,c;           
    c=a+b;                          //function defination...
    printf("Addition is:%d",c);
}

void sub(){
    int a=20,b=10,c;
    c=a-b;                              //function defination...
    printf("Substraction is:%d",c);
}


int main(){
    add();      //function call...
    sub();      //function call...
    return 0;
}