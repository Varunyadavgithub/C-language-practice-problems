// Concept of call by reference....

#include<stdio.h>

void swap(int *p,int *q){ //formal perameter....
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("p=%d q=%d\n",*p,*q);
}
int main(){
    int a=10,b=20;
    swap(&a,&b); //actual perameter...     //swap(10,20)   ---> Call / pass by reference...
    printf("a=%d b=%d",a,b);
    return 0;
}