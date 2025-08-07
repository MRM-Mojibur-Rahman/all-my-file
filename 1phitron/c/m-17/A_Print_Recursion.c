#include<stdio.h>
void pri_n(int n ,int i)
{
    if (i == n+1)
    {
        return;
    }
    
    printf("I love Recursion\n");
    pri_n(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    pri_n(n,1);
    return 0;
}