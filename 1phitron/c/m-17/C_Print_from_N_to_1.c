#include<stdio.h>
void pr(int n , int i)
{
    if (i == n+1)
    {
        return;
    }
    
    pr(n,i+1);
    if (i == 1)
    {
        printf("%d",i);
        
    }
    else
    {
        printf("%d ",i);
    }
    

    
}
int main(){
    int n;
    scanf("%d",&n);
    pr(n,1);
    return 0;
}