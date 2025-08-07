#include<stdio.h>
void sparate(int n)
{

    int rem= n%10;
    int dev=n/10;
    if (dev==0)
    {
        printf("%d ",rem);
        return;
    }
    
    // if (dev==0&&rem==0)
    // {
    //     return;
    // }
    
    sparate(dev);
    printf("%d ",rem);
}
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int num;
        scanf("%d",&num);
        sparate(num);
        printf("\n");
    }
    
    return 0;
}