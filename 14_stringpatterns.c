// I
// NN
// DDD
// IIII
// AAAAA

#include<stdio.h>
#include<string.h>
int main(){
    char str[]="INDIA";
    int len;
    len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=0;j<=i;j++){
            printf("%c",str[i]);
        }
        printf("\n");
    }
}