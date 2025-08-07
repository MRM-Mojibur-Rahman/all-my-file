#include<stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    for (int i = 1; i <=t; i++)
    {
        long long int m;
    int a,b,c;
    scanf("%lld %d %d %d",&m,&a, &b,&c);
    int mal3=a*b*c;
    long long int x;
    if (m%mal3==0)
    {
        x=m/mal3;

    }
    else
    {
        x=-1;
    }
    printf("%lld\n",x);
    }
    
    

    return 0;
}