// WAP to store five students records using structure...

#include<stdio.h>

struct std{
    int id;
    char name[20];
    float marks;
} s[5];     //--->[5] is use for 5 student records...

int main(){
    // struct std s[5];    --> we can also use this
    printf("!...Enter Students records...!\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter student ID: ");
        scanf("%d",&s[i].id);
        printf("Enter student Name: ");
        scanf("%s",&s[i].name);
        printf("Enter student Marks: ");
        scanf("%f",&s[i].marks);

    }
    
    printf("!...Students Records...!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student ID is: %d\n",s[i].id);
        printf("Student Name is: %s\n",s[i].name);
        printf("student Marks is: %f\n",s[i].marks);
    }
    
    return 0;
}