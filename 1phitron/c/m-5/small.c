#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    // printf("%c",x);
    if ('0'<= x && x <='9')
    {
        printf("IS DIGIT\n");
    }
    else if ('A' <= x && x <='Z')
    {
        printf("ALPHA\n\
IS CAPITAL");
    }
    else if('a' <= x && x <='z')
    {
        printf("ALPHA\n\
IS SMALL");
    }
    
    return 0;
}