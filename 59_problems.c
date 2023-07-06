// Find size in Union...

#include<stdio.h>

union persion{
    int age;    //int 4 bytes
    double sal;    //double 8 bytes
}p;

int main(){
    // union persion p;   ---> we can also use thi
    printf("Union size=%d bytes",sizeof(union persion));    //---> Union always generate memory for big member and Structure generate memory for all members...

    return 0;
}