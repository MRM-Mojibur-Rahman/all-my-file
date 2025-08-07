#include<stdio.h>
char small_to_cap(char x){
    char ans = x -32;
    return ans;
}
int main(){
    char x;
    scanf("%c",&x);
    printf("%c",small_to_cap(x));


    return 0;
}