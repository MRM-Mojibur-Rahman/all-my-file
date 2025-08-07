#include<stdio.h>
#include<math.h>
int main(){
   long long int lenth,wide,a;
    scanf("%lld %lld %lld",&lenth , &wide ,&a);
    double lenth_side = (double)lenth/a;
    long long int num1 = ceil(lenth_side);
    double wide_side = (double)wide/a;
    long long int num2 = ceil(wide_side);
    
    long long int num = num1*num2;
    printf("%lld\n",num);


    
    

    
    return 0;
}