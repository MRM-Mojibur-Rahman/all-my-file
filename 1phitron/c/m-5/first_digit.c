#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int num;
    num = x/1000;
    if (num %2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    
    
    return 0;
}