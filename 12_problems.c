//Check charactor is vowel or consonant...
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any charactor:");
    scanf("%c",&ch);
    if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
            printf("...The charactor %c is vowels...",ch);
    }
    else{
        printf("...The charactor %c is consonants...",ch);
    }
    return 0;
}