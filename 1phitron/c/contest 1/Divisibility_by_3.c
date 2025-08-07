#include<stdio.h>
int main(){
    int test;
    long long num;
    scanf("%d",&test);
    scanf("%lld",&num);
    if (num %3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}