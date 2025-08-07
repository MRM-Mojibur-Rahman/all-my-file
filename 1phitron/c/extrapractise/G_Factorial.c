#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        int num;
        scanf("%d",&num);
        long long int fact =1;
        for (int i = 1; i <= num; i++)
        {
            fact*=i;
        }
        
        printf("%lld\n",fact);
    }
    
    return 0;
}