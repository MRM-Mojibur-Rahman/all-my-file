#include<stdio.h>
int summation(int a , int b)
{
    int sum = a+b;
    return sum;
}
int main(){
    int a,b;
    scanf("%d %d",&a ,&b);
    int sum = summation(a,b);
    printf("%d",sum);
    return 0;
}