// Concept of call by value....

#include<stdio.h>

void swap(int x,int y){ //formal perameter....
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d\n",x,y);
}
int main(){
    int a=10,b=20;
    swap(a,b); //actual perameter...     //swap(10,20)   ---> Call / pass by value...
    printf("a=%d b=%d",a,b);
    return 0;
}