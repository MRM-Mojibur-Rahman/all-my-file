#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if (x>=97)
    {
        x=x-32;
        printf("%c",x);
    }
    else if (x<97)
    {
        x=x+32;
        printf("%c",x);
    }
    
    
    return 0;
}