#include<stdio.h>
int main(){
    int x,laddu;
    scanf("%d %d",&x,&laddu);
    int sub = x-laddu*10;
    int jelebi = sub/20;
    printf("%d\n",jelebi);
    return 0;
}