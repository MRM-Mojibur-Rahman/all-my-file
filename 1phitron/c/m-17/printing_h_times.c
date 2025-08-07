#include<stdio.h>
void pri_n(int i,int n)
{
    if (i==n+1)
    {
        return;
    }
    printf("i am king of \n");
    pri_n(i+1,n);
}
int main(){
    int n,i=1;
    scanf("%d",&n);
    pri_n(i,n);
    return 0;
}