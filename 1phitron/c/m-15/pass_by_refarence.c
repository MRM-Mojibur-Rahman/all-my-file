#include<stdio.h>
void fun(int *p){
    *p = 29;
}
int main(){
    int x = 2;
    printf("%d ",x);
    fun(&x);
    printf("%d",x);
    return 0;
}