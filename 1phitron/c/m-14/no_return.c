#include<stdio.h>
void sum2(int a , int b){
    int sum = a + b;
    printf("%d ",sum);
}

int main(){
    int a , b;
    scanf("%d %d",&a, &b);
    sum2(a , b);
    
    return 0;
}