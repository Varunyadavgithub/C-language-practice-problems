// WAP to copy one string into another...

#include<stdalign.h>
#include<string.h>
int main(){

                // method-1

    // char str1[]="My name is Varun Yadav";
    // char str2[50];
    // strcpy(str2,str1);
    // printf("After copy str2:%s",str2);

                // method-2

    char str1[50];
    char str2[50];
    printf("Enter any string: ");
    gets(str1);
    strcpy(str2,str1);
    printf("Ater copy the string:%s\n",str2);
    return 0;
}