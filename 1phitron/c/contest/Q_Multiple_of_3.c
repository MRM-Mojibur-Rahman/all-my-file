#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int dev = n %3;
    if (dev==0)
    {
printf("%d",n);    }
else if (dev==1)
{
    printf("%d",n-1);
}
else if (dev==2)
{
  printf("%d",n+1);
}


    
    
    
    // if ()
    // {
    //     /* code */
    // }
    
    return 0;
}