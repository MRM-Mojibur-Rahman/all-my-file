#include<stdio.h>
int sum2(int a , int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a , b;
    scanf("%d %d",&a, &b);
    int ans =  sum2(a , b);
    printf("%d", ans);
    return 0;
}