#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int dev= num1/num2 ,rem=num1%num2;
    
    
     double f =(double) num1/num2;
    printf("%d %d %.5lf",dev,rem,f);
    return 0;
}