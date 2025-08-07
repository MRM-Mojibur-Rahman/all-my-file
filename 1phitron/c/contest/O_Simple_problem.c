#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rem1 = num%10;
    int rem2 = (num/10)%10;
    printf("%d %d\n",rem2 ,rem1);

    return 0;
}