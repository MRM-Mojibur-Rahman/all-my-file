#include<stdio.h>
void pr(int n , int i)
{
    if (i == n+1)
    {
        return;
    }
    
    printf("%d\n",i);
    pr(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    pr(n,1);
    return 0;
}