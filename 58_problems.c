// WAP to Show the Simple Example of Union...

#include<stdio.h>

union persion{
    int age;
    double sal;
}p;

int main(){
    // union persion p;   ---> we can also use this
    p.age=12;
    printf("persion age: %d\n",p.age);     //In union if we enter any value then at that time print it otherwise give an wrong results...
    p.sal=100000.0;
    printf("persion salary: %lf\n",p.sal);

    return 0;
}