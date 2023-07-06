// WAP to make a simple structure program...

#include<stdio.h>
#include<string.h>
struct emp
{
    int emp_id;
    char emp_name[20];
    float emp_sal;
};
int main(){
    struct emp e;

    e.emp_id=188;
    strcpy(e.emp_name,"Varun Yadav");
    e.emp_sal=1000000.0;

    printf("Employee ID is:%d\n",e.emp_id);
    printf("Employee name is:%s\n",e.emp_name);
    printf("Employee salary is:%f\n",e.emp_sal);
    
    return 0;
}

