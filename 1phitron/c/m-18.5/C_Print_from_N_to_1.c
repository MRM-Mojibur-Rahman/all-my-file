#include<stdio.h>
void fun(int n,int i)
{
    if (i > n)
    {
        return;
    }
    
    
    fun(n,i+1);
    if (i==1)
    {
        printf("%d",i);
        return;
    }
    printf("%d ",i);
}
int main(){
    int n;
    scanf("%d",&n);
    

    fun(n,1);
    return 0;
}