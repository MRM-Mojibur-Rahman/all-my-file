#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    long long int psum= 0;
    long long int nsum=0;
    for (int i = 1; i <=test; i++)
    {
        int num;
        scanf("%d",&num);
        if (num >= 0)
        {
            psum = psum+num;
        }
        else
        {
            nsum = nsum + num;
        }
    }
    printf("%lld %lld",psum , nsum);
    
    return 0;
}